import re
from datetime import datetime

from lib.my_exception import InvalidNumException
from lib.my_exception import MatchingException


def get_col(sheet, col):
    resList = []

    for i in range(2, sheet.max_row + 1):
        resList.append(sheet.cell(row=i, column=col).value)
        if resList[-1] is not None:

            resList[-1] = resList[-1].strip()
    return resList


class MySheet:
    # 一张工作表

    sheet_name = ''
    phy_list = []
    reg_name_list = []
    reg_list = []
    bit_list = []
    high_list = []
    low_list = []
    _col_no = {}

    def get_sheet_name(self, sheet):
        # 把表名的空格替换成下划线
        tmp = sheet.title.strip()
        try:
            self.sheet_name = re.sub(r' ', '_', tmp)
        except BaseException:
            self.sheet_name = tmp
        try:
            self.sheet_name = re.sub(r'-', '_', self.sheet_name)
        except BaseException:
            pass

    def _get_row_no(self, sheet, cf):
        for cell in sheet['1']:
            if cell.value == cf.phy:
                self._col_no['phy'] = cell.column
            elif cell.value == cf.reg_name:
                self._col_no['reg_name'] = cell.column
            elif cell.value == cf.reg:
                self._col_no['reg'] = cell.column
            elif cell.value == cf.bit:
                self._col_no['bit'] = cell.column

    def __get_phy_end(self, sheet):
        tmp = sheet.cell(row=sheet.max_row, column=self._col_no['phy']).value
        try:
            res = int(tmp, 16)
        except ValueError:
            res = None
        except TypeError:
            res = None
        except BaseException:
            raise
        return res

    def _get_reg(self, sheet, col):
        # 获取regList
        for i in range(2, sheet.max_row + 1):
            tmp = sheet.cell(row=i, column=col).value
            if tmp:  # 如果tmp不是None
                tmp = tmp.strip()
                tag = re.search(r'reserved', tmp, re.I)  # re.I表示大小写不敏感
                if tag:
                    self.reg_list.append('reserved')  # 匹配成功，替换为reserved
                else:
                    try:
                        self.reg_list.append(
                            re.sub(r'[^a-zA-Z0-9]+', '_', tmp))
                    except Exception:
                        self.reg_list.append(tmp)
            else:
                self.reg_list.append(None)

    def _get_reg_name(self, sheet, cf):
        # 得到reg_name列
        if cf.reg_name:
            self.reg_name_list = get_col(sheet, self._col_no['reg_name'])
        else:
            for i in range(2, sheet.max_row + 1):
                if sheet.cell(row=i, column=self._col_no['phy']).value:
                    self.reg_name_list.append(
                        self.sheet_name +
                        sheet.cell(
                            row=i,
                            column=self._col_no['phy']).value.strip())
                else:
                    self.reg_name_list.append(None)

    def _del_blank_row(self):
        # 遍历bitList，高位存于highList，低位存于lowList，无值则判断reg是否无值，成立则删除该行，否则不匹配报错
        patten1 = re.compile(r'\d+:\d+')
        patten2 = re.compile(r'\d+')
        patten3 = re.compile(r':')
        length = len(self.bit_list)
        i = 0
        row = 2
        while i < length:
            line = self.bit_list[i]
            if self.reg_list[i] is None:  # 若bit有值而reg无值，则报不匹配异常
                if line is not None:
                    raise MatchingException(row)
            try:
                tmp = re.search(patten1, line)
                if tmp:
                    tag = re.search(patten3, tmp.group()).span()[0]  # 得到：的索引值
                    self.high_list.append(int(tmp.group()[0:tag]))
                    self.low_list.append(int(tmp.group()[tag + 1:]))
                    if int(
                            tmp.group()[
                            0:tag]) > 31 or int(
                        tmp.group()[
                            tag +
                            1:]) < 0:  # 判断bit列数据是否合法
                        raise InvalidNumException(
                            int(self._col_no['bit']), row)

                else:
                    tmp2 = re.search(patten2, line)
                    if tmp2:
                        self.high_list.append(int(tmp2.group()))  # 高低位赋相同的值
                        self.low_list.append(int(tmp2.group()))
                        if int(
                            tmp2.group()) > 31 or int(
                                tmp2.group()) < 0:  # 判断bit列数据是否合法
                            raise InvalidNumException(
                                int(self._col_no['bit']), row)
                    else:  # 如果两个都匹配不上，当做None处理
                        del self.phy_list[i]
                        del self.reg_name_list[i]
                        del self.reg_list[i]
                        del self.bit_list[i]
                        i = i - 1
                        length = length - 1

            except InvalidNumException:
                raise
            except BaseException:  # 如果bitList[i]为None，删掉对应的phy,regname,reg
                del self.phy_list[i]
                del self.reg_name_list[i]
                del self.reg_list[i]
                del self.bit_list[i]
                i = i - 1
                length = length - 1
                pass
            i = i + 1
            row = row + 1

    def _add_reserved(self, order):
        # 遍历low
        length = len(self.low_list)
        i = 0

        # 降序
        if int(order):
            while i < length:
                if self.phy_list[i]:  # 一个寄存器的开始
                    if i == 0:
                        # 如果第一个寄存器的第一个高位不为31
                        if self.high_list[0] != 31:
                            self.high_list.insert(0, 31)
                            self.low_list.insert(0, self.high_list[1] + 1)
                            self.reg_list.insert(0, 'reserved')
                            self.phy_list.insert(1, None)
                            self.reg_name_list.insert(1, None)
                            length = length + 1
                            i = i + 1
                    elif self.low_list[i - 1]:  # 不是第一个寄存器，判断上一个寄存器最后的低位是否为0
                        self.high_list.insert(i, self.low_list[i - 1] - 1)
                        self.low_list.insert(i, 0)

                        self.reg_list.insert(i, 'reserved')
                        self.phy_list.insert(i, None)
                        self.reg_name_list.insert(i, None)
                        length = length + 1
                        i = i + 1
                # 不是一个寄存器的开始
                elif self.high_list[i] - self.low_list[i - 1] != (-1):
                    tmp = self.high_list[i]
                    self.high_list.insert(i, self.low_list[i - 1] - 1)
                    self.low_list.insert(i, tmp + 1)
                    self.reg_list.insert(i, 'reserved')
                    self.phy_list.insert(i, None)
                    self.reg_name_list.insert(i, None)
                    length = length + 1
                    i = i + 1

                i = i + 1
            if self.low_list[i - 1] != 0:  # 最后一个寄存器最后一段低位不为0
                self.high_list.append(self.low_list[i - 1] - 1)
                self.low_list.append(0)
                self.reg_list.append('reserved')
                self.phy_list.append(None)
                self.reg_name_list.append(None)

        # 升序
        else:
            while i < length:
                if self.phy_list[i]:  # 一个寄存器的开始
                    if i == 0:  # 如果第一个寄存器的第一个低位不为零
                        if self.low_list[0] != 0:
                            self.low_list.insert(0, 0)
                            self.high_list.insert(0, self.low_list[1] - 1)
                            self.reg_list.insert(0, 'reserved')
                            self.phy_list.insert(1, None)
                            self.reg_name_list.insert(1, None)
                            length = length + 1
                            i = i + 1
                    # 不是第一个寄存器，判断上一个寄存器最后的高位是否为31
                    elif 31 - self.high_list[i - 1]:
                        self.low_list.insert(i, self.high_list[i - 1] + 1)
                        self.high_list.insert(i, 31)
                        self.reg_list.insert(i, 'reserved')
                        self.phy_list.insert(i, None)
                        self.reg_name_list.insert(i, None)
                        length = length + 1
                        i = i + 1
                elif self.low_list[i] - self.high_list[i - 1] > 1:  # 不是一个寄存器的开始
                    tmp = self.low_list[i]
                    self.low_list.insert(i, self.high_list[i - 1] + 1)
                    self.high_list.insert(i, tmp - 1)
                    self.reg_list.insert(i, 'reserved')
                    self.phy_list.insert(i, None)
                    self.reg_name_list.insert(i, None)
                    length = length + 1
                    i = i + 1

                i = i + 1
            if self.high_list[i - 1] != 31:  # 最后一个寄存器最后一段高位不为31
                self.low_list.append(self.high_list[i - 1] + 1)
                self.high_list.append(31)
                self.reg_list.append('reserved')
                self.phy_list.append(None)
                self.reg_name_list.append(None)

    def __init__(self, sheet, cf):
        # 得到表名
        self.get_sheet_name(sheet)
        # 得到需要的信息的列号
        self._get_row_no(sheet, cf)
        assert self._col_no['phy'] and self._col_no['reg'] and self._col_no['bit']
        self.phy_list = get_col(sheet, self._col_no['phy'])
        try:
            self.phy_end = self.__get_phy_end(sheet)
        except BaseException:
            raise
        self._get_reg_name(sheet, cf)
        self._get_reg(sheet, self._col_no['reg'])
        self.bit_list = get_col(sheet, self._col_no['bit'])
        try:
            self._del_blank_row()
        except BaseException:
            raise
        self._add_reserved(cf.order)

    def __del__(self):
        self.sheet_name = ''
        self.phy_list.clear()
        self.reg_name_list.clear()
        self.reg_list.clear()
        self.bit_list.clear()
        self.high_list.clear()
        self.low_list.clear()
        self._col_no.clear()

    def result(self):
        filename = (self.sheet_name.lower() + '.h')
        f = open(filename, 'w')
        # 写头
        dt = datetime.now()
        print(
            '//******************************************************************************',
            file=f)
        print('// Copyright     :  Copyright (C) ' +
              str(dt.year) + ', goke Technologies Co., Ltd.', file=f)
        print('// File name     :  ' + filename, file=f)
        print('// Version       :  1.0', file=f)
        print('// Date          :  ' + str(dt.year) + '-' +
              str(dt.month) + '-' + str(dt.day), file=f)
        print('// Description   :  ', file=f)
        print('// History       :  ' + str(dt.year) + '-' +
              str(dt.month) + '-' + str(dt.day) + ' Create file', file=f)
        print('// Author        :  beishui', file=f)
        print(
            '//******************************************************************************\n',
            file=f)
        print('#ifndef __' + self.sheet_name.upper() + '_H__', file=f)
        print('#define __' + self.sheet_name.upper() + '_H__\n', file=f)
        print('\n\n', file=f)

        # 写代码主体
        # 遍历regList
        length = len(self.high_list)
        i = 0

        while i < length:
            if self.phy_list[i]:  # 一个寄存器开头
                reserved_count = 0
                union_name = self.reg_name_list[i]
                print(
                    'typedef union' +
                    '\n' +
                    '{\n    /* Define the struct bits */\n    struct\n    {',
                    file=f)
            if self.reg_list[i] == 'reserved':
                del self.reg_list[i]
                self.reg_list.insert(i, 'reserved' + str(reserved_count))
                reserved_count = reserved_count + 1

            # 根据高低位是否相同来改变注释的写法
            if self.high_list[i] == self.low_list[i]:
                print('        unsigned int    ' +
                      '{:30}'.format(self.reg_list[i].lower()) +
                      ' : ' +
                      '{:2}'.format(str(self.high_list[i] -
                                        self.low_list[i] +
                                        1)) +
                      '  ; /* [' +
                      '{:2}'.format(str(self.high_list[i])) +
                      ']      */', file=f)
            else:
                print('        unsigned int    ' +
                      '{:30}'.format(self.reg_list[i].lower()) +
                      ' : ' +
                      '{:2}'.format(str(self.high_list[i] -
                                        self.low_list[i] +
                                        1)) +
                      '  ; /* [' +
                      '{:2}'.format(str(self.high_list[i])) +
                      '..' +
                      '{:2}'.format(str(self.low_list[i])) +
                      ']  */', file=f)
            if i == length - 1 or self.phy_list[i + 1]:  # 一个寄存器结尾
                print(
                    '    } bits;    /* Define an unsigned member */' +
                    '\n' +
                    '\n' +
                    '    unsigned int    u32;' +
                    '\n' +
                    '} U_' +
                    union_name.upper() +
                    ';' +
                    '\n',
                    file=f)

            i = i + 1

        # 输出struct
        print('typedef struct' + '\n' + '{', file=f)
        length = len(self.high_list)
        i = 0
        reserved_count = 0
        lastI = 0  # 记录上一个phy有值的I的值
        while i < length:
            if self.phy_list[i]:  # phy[i]有值
                if i == 0:
                    if int(self.phy_list[i], 16) != 0x00:
                        tmp = int(self.phy_list[i], 16) - 0x00
                        print(
                            '    volatile ' +
                            '{:30}'.format('unsigned int') +
                            '   ' +
                            'reserved' +
                            str(reserved_count) +
                            '[' +
                            str(tmp) +
                            ']' +
                            ';',
                            file=f)
                        reserved_count = reserved_count + 1
                elif int(self.phy_list[i], 16) - int(self.phy_list[lastI], 16) > 1:
                    tmp = int(self.phy_list[i], 16) - \
                          int(self.phy_list[lastI], 16)
                    print('    volatile ' +
                          '{:30}'.format('unsigned int') +
                          '   ' +
                          'reserved' +
                          str(reserved_count) +
                          '[' +
                          str(tmp -
                              1) +
                          ']' +
                          ';', file=f)
                    reserved_count = reserved_count + 1
                print(
                    '    volatile U_' +
                    '{:30}'.format(
                        self.reg_name_list[i].upper()) +
                    '   ' +
                    self.reg_name_list[i] +
                    ';',
                    file=f)
                lastI = i
            i = i + 1

        # 添加end
        if self.phy_end is not None:
            tmp = self.phy_end - int(self.phy_list[lastI], 16)
            if tmp != 0:
                print('    volatile ' +
                      '{:30}'.format('unsigned int') +
                      '   ' +
                      'reserved' +
                      str(reserved_count) +
                      '[' +
                      str(tmp -
                          1) +
                      ']' +
                      ';', file=f)
        print('} S_' + self.sheet_name.upper() + '_REGS_TYPE;\n', file=f)

        # 写文件尾
        print('\n\n#endif \n', file=f)
        f.close()

    def simple_result(self):  # 简略的结果输出
        filename = (self.sheet_name + '.h')
        f = open(filename, 'w')
        # 写头
        '''
        dt = datetime.now()
        print(
            '//******************************************************************************',
            file=f)
        print('// Copyright     :  Copyright (C) ' +
              str(dt.year) + ', goke Technologies Co., Ltd.', file=f)
        print('// File name     :  ', file=f)
        print('// Version       :  1.0', file=f)
        print('// Date          :  ' + str(dt.year) + '-' +
              str(dt.month) + '-' + str(dt.day), file=f)
        print('// Description   :  ', file=f)
        print('// History       :  ' + str(dt.year) + '-' +
              str(dt.month) + '-' + str(dt.day) + ' Create file', file=f)
        print(
            '//******************************************************************************\n',
            file=f)
        '''
        print('#ifndef __' + self.sheet_name.upper() + '_H__', file=f)
        print('#define __' + self.sheet_name.upper() + '_H__\n', file=f)
        print('#include \n\n', file=f)

        # 写代码主体
        # 输出struct
        print('typedef struct' + '\n' + '{', file=f)
        length = len(self.high_list)
        i = 0
        reserved_count = 0
        lastI = 0  # 记录上一个phy有值的I的值
        while i < length:
            if self.phy_list[i]:  # phy[i]有值
                if i == 0:  # 表的第一个寄存器
                    if int(self.phy_list[i], 16) != 0x00:  # 地址不为0x00
                        tmp = int(self.phy_list[i], 16) - 0x00
                        print(
                            '\n    /*0x00 ~  {0:2x}*/'.format(int(self.phy_list[i], 16) - 1), file=f)
                        print(
                            '    {:30}'.format('GK_U32') +
                            '   reserved' +
                            str(reserved_count) +
                            '[' +
                            str(tmp) +
                            '];\n', file=f)
                        reserved_count = reserved_count + 1
                        print('\n    /*' + self.phy_list[i] + '*/', file=f)
                    else:
                        print('\n    /*0x00*/', file=f)
                # 不是第一个寄存器，地址不连续
                elif int(self.phy_list[i], 16) - int(self.phy_list[lastI], 16) > 1:
                    tmp = int(self.phy_list[i], 16) - \
                        int(self.phy_list[lastI], 16)
                    if tmp == 2:  # 仅缺省一个寄存器
                        print(
                            '\n    /*' + hex(int(self.phy_list[lastI], 16) + 1) + '*/', file=f)
                    else:  # 缺省多个寄存器
                        print('\n    /*' +
                              hex(int(self.phy_list[lastI], 16) +
                                  1) +
                              ' ~ ' +
                              hex(int(self.phy_list[i], 16) -
                                  1) +
                              '*/', file=f)
                    print(
                        '    {:30}'.format('GK_U32') +
                        '   reserved' +
                        str(reserved_count) +
                        '[' +
                        str(tmp -
                            1) +
                        '];\n', file=f)
                    reserved_count = reserved_count + 1
                    print('\n    /*' + self.phy_list[i] + '*/', file=f)
                else:  # 不是第一个寄存器且地址连续
                    print('\n    /*' + self.phy_list[i] + '*/', file=f)
                lastI = i

            # 将reserved改成空
            if self.reg_list[i] == 'reserved':
                del self.reg_list[i]
                self.reg_list.insert(i, '')
            # 根据高低位是否相同来改变注释的写法
            if self.high_list[i] == self.low_list[i]:
                print('    GK_U32    ' +
                      '{:30}'.format(self.reg_list[i]) +
                      ' : ' +
                      '{:2}'.format(str(self.high_list[i] -
                                        self.low_list[i] +
                                        1)) +
                      '  ; /* [' +
                      '{:2}'.format(str(self.high_list[i])) +
                      ']      */', file=f)
            else:
                print('    '
                      'GK_U32    ' +
                      '{:30}'.format(self.reg_list[i]) +
                      ' : ' +
                      '{:2}'.format(str(self.high_list[i] -
                                        self.low_list[i] +
                                        1)) +
                      '  ; /* [' +
                      '{:2}'.format(str(self.high_list[i])) +
                      '..' +
                      '{:2}'.format(str(self.low_list[i])) +
                      ']  */', file=f)
            i = i + 1

        # 添加end
        if self.phy_end is not None:
            tmp = self.phy_end - int(self.phy_list[lastI], 16)
            if tmp != 0:
                print(
                    '    {:30}'.format('GK_U32') +
                    '   reserved' +
                    str(reserved_count) +
                    '[' +
                    str(tmp -
                        1) +
                    ']' +
                    ';', file=f)
        print('} S_' + self.sheet_name.upper() + '_REGS_TYPE;\n', file=f)

        # 写文件尾
        print('\n\n#endif \n', file=f)
        f.close()
