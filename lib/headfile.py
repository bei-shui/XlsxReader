import re
from datetime import datetime


class HeadFile:
    # 一个头文件包含：一个结构体和若干个共用体

    def __init__(self, file):
        self.union_list = []
        self.file_name = file  # 此头文件的文件名
        with open(file) as file_obj:
            lines = file_obj.readlines()
        length = len(lines)
        i = 0
        struct_member = []  # 结构体成员
        while i < length:
            # 读到typedef union时，创建一个Union对象
            if lines[i] == 'typedef union\n':
                u_member = []  # 共用体成员
                member_size = []  # 共用体成员的大小
                member_write = []  # 共用体成员是否可写
                i = i + 5
                while re.search(r'unsigned int', lines[i]) is not None:
                    tmp = re.split(r' +', lines[i])
                    u_member.append(tmp[3])
                    member_size.append(tmp[5])
                    if tmp[8] == 'write':
                        member_write.append(1)
                    else:
                        member_write.append(0)
                    i = i + 1
                i = i + 3
                tmp = re.split(r' ', lines[i])
                u_name = tmp[1]  # 共用体名
                self.union_list.append(
                    Union(u_name[:-2], u_member, member_size, member_write))  # 添加一个共用体对象入列表
                i = i + 1

            # 读到typedef struct时，创建一个Struct对象
            elif lines[i] == 'typedef struct\n':
                i = i + 2
                member_write = []
                while re.match(r'}', lines[i]) is None:
                    if re.search(r'reserved', lines[i]):
                        pass
                    else:
                        tmp = re.split(r' +', lines[i])
                        struct_member.append(tmp[3])
                        if re.search(r'write', lines[i]):
                            member_write.append(1)
                        else:
                            member_write.append(0)
                    i = i + 1
                tmp = re.split(r' ', lines[i])
                s_name = tmp[1]
                self.struct = Struct(s_name[:-2], struct_member, member_write)
                i = i + 1
            i = i + 1

    def __write_head_file(self, h_file_handle):

        # 写头
        dt = datetime.now()
        print(
            '//******************************************************************************',
            file=h_file_handle)
        print('// Copyright     :  Copyright (C) ' +
              str(dt.year) + ', goke Technologies Co., Ltd.', file=h_file_handle)
        print('// File name     :  ' + h_file_handle.name, file=h_file_handle)
        print('// Version       :  1.0', file=h_file_handle)
        print('// Date          :  ' + str(dt.year) + '-' +
              str(dt.month) + '-' + str(dt.day), file=h_file_handle)
        print('// Description   :  ', file=h_file_handle)
        print('// History       :  ' + str(dt.year) + '-' +
              str(dt.month) + '-' + str(dt.day) + ' Create file', file=h_file_handle)
        print('// Author        :  beishui', file=h_file_handle)
        print(
            '//******************************************************************************\n',
            file=h_file_handle)
        print('#ifndef __' +
              self.file_name[:-
                             2].upper() +
              '_REG_CTR_H__', file=h_file_handle)
        print('#define __' +
              self.file_name[:-
                             2].upper() +
              '_REG_CTR_H__', file=h_file_handle)
        print('#include "gk_type.h"', file=h_file_handle)
        print('#include "' + self.file_name + '"\n', file=h_file_handle)
        print('#ifndef GK_INLINE', file=h_file_handle)
        print('#define GK_INLINE 1', file=h_file_handle)
        print('#endif', file=h_file_handle)
        print('#if GK_INLINE==1\n', file=h_file_handle)
        print('#ifndef GINLINE', file=h_file_handle)
        print('#define GINLINE __inline', file=h_file_handle)
        print('#endif', file=h_file_handle)
        for i in range(len(self.union_list)):  # 共用体列表的遍历
            # 一个共用体内的成员的遍历
            for j in range(len(self.union_list[i].union_member)):
                if self.union_list[i].member_write[j]:
                    # 写set函数
                    print(
                        'GINLINE GK_VOID ' +
                        self.struct.fun_struct_name +
                        'DRV_SET_' +
                        self.union_list[i].fun_union_member[j] +
                        '(' +
                        self.struct.struct_name +
                        ' *pstRegs, GK_U' +
                        self.union_list[i].member_size[j]+' uData)',
                        file=h_file_handle)
                    print('{', file=h_file_handle)
                    print(
                        '    ' +
                        self.union_list[i].union_name +
                        ' stData;',
                        file=h_file_handle)
                    # print('    VI_CHECK_POINTER(pstRegs);\n', file=h_file_handle)
                    print(
                        '    stData.u32 = pstRegs->' +
                        self.struct.struct_list[i] +
                        '.u32;',
                        file=h_file_handle)
                    print(
                        '    stData.bits.' +
                        self.union_list[i].union_member[j] +
                        ' = uData;',
                        file=h_file_handle)
                    print(
                        '    pstRegs->' +
                        self.struct.struct_list[i] +
                        '.u32 = stData.u32;\n',
                        file=h_file_handle)
                    print('    #if GK_VI_DEBUG_OPEN', file=h_file_handle)
                    print(
                        '        GK_VI_PRINTF_FUNC("ISP_DRV_SET_' +
                        self.union_list[i].fun_union_member[j] +
                        ': 0x%08x", stData.u32);',
                        file=h_file_handle)
                    print('    #endif', file=h_file_handle)
                    print('\n}\n\n', file=h_file_handle)

                # 写get函数
                print(
                    'GINLINE GK_U' +
                    self.union_list[i].member_size[j] + ' ' +
                    self.struct.fun_struct_name +
                    'DRV_GET_' +
                    self.union_list[i].fun_union_member[j] +
                    '(' +
                    self.struct.struct_name +
                    ' *pstRegs)',
                    file=h_file_handle)
                print('{', file=h_file_handle)
                print(
                    '    ' +
                    self.union_list[i].union_name +
                    ' stData;',
                    file=h_file_handle)
                # print('    VI_CHECK_POINTER(pstRegs);\n', file=h_file_handle)
                print(
                    '    stData.u32 = pstRegs->' +
                    self.struct.struct_list[i] +
                    '.u32;\n',
                    file=h_file_handle)
                print('    #if GK_VI_DEBUG_OPEN', file=h_file_handle)
                print(
                    '        GK_VI_PRINTF_FUNC("ISP_DRV_GET_' +
                    self.union_list[i].fun_union_member[j] +
                    ': 0x%08x", stData.u32);',
                    file=h_file_handle)
                print('    #endif', file=h_file_handle)
                print(
                    '    return stData.bits.' +
                    self.union_list[i].union_member[j] +
                    ';\n}\n\n',
                    file=h_file_handle)

        # 在最后生成整个共用体的读写函数
        for i in range(len(self.struct.struct_list)):

            if self.struct.member_write[i]:
                # 写set函数
                print(
                    'GINLINE GK_VOID ' +
                    self.struct.fun_struct_name +
                    'DRV_SET_ALL_' +
                    self.union_list[i].fun_union_name +
                    '(' +
                    self.struct.struct_name +
                    ' *pstRegs, GK_U32 uData)',
                    file=h_file_handle)
                print('{', file=h_file_handle)
                # print('    VI_CHECK_POINTER(pstRegs);\n', file=h_file_handle)
                print(
                    '    pstRegs->' +
                    self.struct.struct_list[i] +
                    '.u32 = uData;',
                    file=h_file_handle)
                print('    #if GK_VI_DEBUG_OPEN', file=h_file_handle)
                print(
                    '        GK_VI_PRINTF_FUNC("ISP_DRV_SET_' +
                    self.union_list[i].fun_union_name +
                    ': 0x%08x", uData);',
                    file=h_file_handle)
                print('    #endif', file=h_file_handle)
                print('\n}\n\n', file=h_file_handle)

            # 写get函数
            print(
                'GINLINE GK_U32 ' +
                self.struct.fun_struct_name +
                'DRV_GET_ALL_' +
                self.union_list[i].fun_union_name +
                '(' +
                self.struct.struct_name +
                ' *pstRegs)',
                file=h_file_handle)
            print('{', file=h_file_handle)
            print(
                '    ' +
                self.union_list[i].union_name +
                ' stData;',
                file=h_file_handle)
            # print('    VI_CHECK_POINTER(pstRegs);\n', file=h_file_handle)
            print(
                '    stData.u32 = pstRegs->' +
                self.struct.struct_list[i] +
                '.u32;\n',
                file=h_file_handle)
            print('    #if GK_VI_DEBUG_OPEN', file=h_file_handle)
            print(
                '        GK_VI_PRINTF_FUNC("ISP_DRV_GET_' +
                self.union_list[i].fun_union_name +
                ': 0x%08x", stData.u32);',
                file=h_file_handle)
            print('    #endif', file=h_file_handle)
            print(
                '    return stData.u32' +
                ';\n}\n\n',
                file=h_file_handle)

        # 当内联未定义时声明函数
        print('#else', file=h_file_handle)
        for i in range(len(self.union_list)):  # 共用体列表的遍历
            # 一个共用体内的成员的遍历
            for j in range(len(self.union_list[i].union_member)):
                if self.union_list[i].member_write[j]:
                    # 声明set函数
                    print(
                        'GK_VOID ' +
                        self.struct.fun_struct_name +
                        'DRV_SET_' +
                        self.union_list[i].fun_union_member[j] +
                        '(' +
                        self.struct.struct_name +
                        ' *pstRegs, GK_U' +
                        self.union_list[i].member_size[j]+' uData);',
                        file=h_file_handle)

                # 声明get函数
                print(
                    'GK_U ' +
                    self.union_list[i].member_size[j] + ' ' +
                    self.struct.fun_struct_name +
                    'DRV_GET_' +
                    self.union_list[i].fun_union_member[j] +
                    '(' +
                    self.struct.struct_name +
                    ' *pstRegs);',
                    file=h_file_handle)

        # 在最后声明整个共用体的读写函数
        for i in range(len(self.struct.struct_list)):
            if self.struct.member_write[i]:
                # 写set函数
                print(
                    'GK_U32 ' +
                    self.struct.fun_struct_name +
                    'DRV_SET_ALL_' +
                    self.union_list[i].fun_union_name +
                    '(' +
                    self.struct.struct_name +
                    ' *pstRegs, GK_U32 uData);',
                    file=h_file_handle)

            # 写get函数
            print(
                'GK_U32 ' +
                self.struct.fun_struct_name +
                'DRV_GET_ALL_' +
                self.union_list[i].fun_union_name +
                '(' +
                self.struct.struct_name +
                ' *pstRegs);',
                file=h_file_handle)
        print('#endif', file=h_file_handle)
        print('#endif', file=h_file_handle)

    def __write_c_file(self, c_file_handle, h_file_name):

        # 写头
        dt = datetime.now()
        print(
            '//******************************************************************************',
            file=c_file_handle)
        print('// Copyright     :  Copyright (C) ' +
              str(dt.year) + ', goke Technologies Co., Ltd.', file=c_file_handle)
        print('// File name     :  ' + c_file_handle.name, file=c_file_handle)
        print('// Version       :  1.0', file=c_file_handle)
        print('// Date          :  ' + str(dt.year) + '-' +
              str(dt.month) + '-' + str(dt.day), file=c_file_handle)
        print('// Description   :  ', file=c_file_handle)
        print('// History       :  ' + str(dt.year) + '-' +
              str(dt.month) + '-' + str(dt.day) + ' Create file', file=c_file_handle)
        print('// Author        :  beishui', file=c_file_handle)
        print(
            '//******************************************************************************\n',
            file=c_file_handle)
        print('#include "gk_type.h"', file=c_file_handle)
        print('#ifndef GK_INLINE', file=c_file_handle)
        print('#define GK_INLINE 1', file=c_file_handle)
        print('#endif', file=c_file_handle)
        print('#if GK_INLINE==0\n', file=c_file_handle)
        print('#include "' + self.file_name + '"', file=c_file_handle)
        print('#include "' + h_file_name + '"\n', file=c_file_handle)

        for i in range(len(self.union_list)):  # 共用体列表的遍历
            # 一个共用体内的成员的遍历
            for j in range(len(self.union_list[i].union_member)):
                if self.union_list[i].member_write[j]:
                    # 写set函数
                    print(
                        'GK_VOID ' +
                        self.struct.fun_struct_name +
                        'DRV_SET_' +
                        self.union_list[i].fun_union_member[j] +
                        '(' +
                        self.struct.struct_name +
                        ' *pstRegs, GK_U' +
                        self.union_list[i].member_size[j]+' uData)',
                        file=c_file_handle)
                    print('{', file=c_file_handle)
                    print(
                        '    ' +
                        self.union_list[i].union_name +
                        ' stData;',
                        file=c_file_handle)
                    # print('    VI_CHECK_POINTER(pstRegs);\n', file=c_file_handle)
                    print(
                        '    stData.u32 = pstRegs->' +
                        self.struct.struct_list[i] +
                        '.u32;',
                        file=c_file_handle)
                    print(
                        '    stData.bits.' +
                        self.union_list[i].union_member[j] +
                        ' = uData;',
                        file=c_file_handle)
                    print(
                        '    pstRegs->' +
                        self.struct.struct_list[i] +
                        '.u32 = stData.u32;\n',
                        file=c_file_handle)
                    print('    #if GK_VI_DEBUG_OPEN', file=c_file_handle)
                    print(
                        '        GK_VI_PRINTF_FUNC("ISP_DRV_SET_' +
                        self.union_list[i].fun_union_member[j] +
                        ': 0x%08x", stData.u32);',
                        file=c_file_handle)
                    print('    #endif', file=c_file_handle)
                    print('\n}\n\n', file=c_file_handle)

                # 写get函数
                print(
                    'GK_U' +
                    self.union_list[i].member_size[j]+' ' +
                    self.struct.fun_struct_name +
                    'DRV_GET_' +
                    self.union_list[i].fun_union_member[j] +
                    '(' +
                    self.struct.struct_name +
                    ' *pstRegs)',
                    file=c_file_handle)
                print('{', file=c_file_handle)
                print(
                    '    ' +
                    self.union_list[i].union_name +
                    ' stData;',
                    file=c_file_handle)
                # print('    VI_CHECK_POINTER(pstRegs);\n', file=c_file_handle)
                print(
                    '    stData.u32 = pstRegs->' +
                    self.struct.struct_list[i] +
                    '.u32;\n',
                    file=c_file_handle)
                print('    #if GK_VI_DEBUG_OPEN', file=c_file_handle)
                print(
                    '        GK_VI_PRINTF_FUNC("ISP_DRV_GET_' +
                    self.union_list[i].fun_union_member[j] +
                    ': 0x%08x", stData.u32);',
                    file=c_file_handle)
                print('    #endif', file=c_file_handle)
                print(
                    '    return stData.bits.' +
                    self.union_list[i].union_member[j] +
                    ';\n}\n\n',
                    file=c_file_handle)

        # 在最后生成整个共用体的读写函数
        for i in range(len(self.struct.struct_list)):
            if self.struct.member_write[i]:
                # 写set函数
                print(
                    'GK_VOID ' +
                    self.struct.fun_struct_name +
                    'DRV_SET_ALL_' +
                    self.union_list[i].fun_union_name +
                    '(' +
                    self.struct.struct_name +
                    ' *pstRegs, GK_U32 uData)',
                    file=c_file_handle)
                print('{', file=c_file_handle)
                # print('    VI_CHECK_POINTER(pstRegs);\n', file=c_file_handle)
                print(
                    '    pstRegs->' +
                    self.struct.struct_list[i] +
                    '.u32 = uData;',
                    file=c_file_handle)
                print('    #if GK_VI_DEBUG_OPEN', file=c_file_handle)
                print(
                    '        GK_VI_PRINTF_FUNC("ISP_DRV_SET_' +
                    self.union_list[i].fun_union_name +
                    ': 0x%08x", uData);',
                    file=c_file_handle)
                print('    #endif', file=c_file_handle)
                print('\n}\n\n', file=c_file_handle)

            # 写get函数
            print(
                'GK_U32 ' +
                self.struct.fun_struct_name +
                'DRV_GET_ALL_' +
                self.union_list[i].fun_union_name +
                '(' +
                self.struct.struct_name +
                ' *pstRegs)',
                file=c_file_handle)
            print('{', file=c_file_handle)
            print(
                '    ' +
                self.union_list[i].union_name +
                ' stData;',
                file=c_file_handle)
            # print('    VI_CHECK_POINTER(pstRegs);\n', file=c_file_handle)
            print(
                '    stData.u32 = pstRegs->' +
                self.struct.struct_list[i] +
                '.u32;\n',
                file=c_file_handle)
            print('    #if GK_VI_DEBUG_OPEN', file=c_file_handle)
            print(
                '        GK_VI_PRINTF_FUNC("ISP_DRV_GET_' +
                self.union_list[i].fun_union_name +
                ': 0x%08x", stData.u32);',
                file=c_file_handle)
            print('    #endif', file=c_file_handle)
            print(
                '    return stData.u32' +
                ';\n}\n\n',
                file=c_file_handle)

        print('#endif', file=c_file_handle)

    def result(self):
        # 按一定格式输出result.c文件
        # 生成的h文件名
        h_file_name = '../result/' + self.file_name[:-2] + '_reg_ctr.h'
        # 生成的c文件名
        c_file_name = '../result/' + self.file_name[:-2] + '_reg_ctr.c'
        h_file_handle = open(h_file_name, 'w')
        c_file_handle = open(c_file_name, 'w')
        self.__write_head_file(h_file_handle)
        self.__write_c_file(c_file_handle, h_file_name)
        h_file_handle.close()
        c_file_handle.close()


class Struct:
    # 结构体名、用于函数名使用的结构体名和结构体成员
    def __init__(self, struct_name, struct_member=[], member_write=[]):

        self.member_write = member_write
        patten = re.compile(r'_[a-zA-Z0-9]+_[a-zA-Z0-9]+_')
        self.struct_name = struct_name  # 结构体名
        self.fun_struct_name = re.search(patten, struct_name).group()[
            1:]  # 用于函数名使用的结构体名

        self.struct_list = []  # 结构体成员
        for member in struct_member:
            self.struct_list.append(member[:-2])  # 去掉末尾的分号和回车


class Union:
    # 共用体名、共用体成员、用于函数名使用的共用体成员
    def __init__(self, union_name, union_member=[], member_size=[], member_write=[]):
        self.union_name = union_name  # 共用体名
        self.member_write = member_write  # 是否可写
        self.fun_union_name2 = ('u' + union_name[2:] + '_')  # 用于普通函数名使用的共用体名
        patten = re.compile(r'reserved')
        patten1 = re.compile(r'[a-zA-Z0-9]+_[a-zA-Z0-9]+_')
        patten2 = re.compile(r'_+')

        tmp = re.sub(patten1, '', self.union_name, 1)
        self.fun_union_name = re.sub(
            patten2, '', tmp.title())  # 用于最后函数名使用的共用体名
        self.union_member = []  # 共用体成员
        self.member_size = []  # 共用体成员的大小
        self.fun_union_member = []  # 用于函数名使用的裁剪共用体成员
        length = len(union_member)
        i = 0
        while i < length:
            if re.search(
                    patten, union_member[i]) is None:  # 将非reserved的成员添加进共用体成员
                self.union_member.append(union_member[i])
                # tmp = re.sub(patten1, '', union_member[i], 1)  # 去掉前缀
                tmp = re.sub(
                    patten2, '', union_member[i].title())  # 首字母大写并去掉下划线
                self.fun_union_member.append(tmp)
                if int(member_size[i][:-1]) < 8:
                    self.member_size.append('8')
                elif int(member_size[i][:-1]) < 16:
                    self.member_size.append('16')
                else:
                    self.member_size.append('32')

            i = i + 1
