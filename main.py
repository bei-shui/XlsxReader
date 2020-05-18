import datetime
from datetime import datetime
import os

import openpyxl

from my_exception import InvalidNumException
from my_exception import MatchingException
from readconfig import ReadConfig
from sheet import MySheet


def main():
    # 读文件
    cf = ReadConfig()
    filename = cf.file_name
    print('尝试打开'+filename)
    wb = openpyxl.load_workbook(filename)
    print('成功打开文件，正在分析...\n')
    path = os.getcwd() + '\\result'
    if os.path.exists(path) is False:  # 判断本目录下是否存在result文件夹，不存在则创建
        os.mkdir(path)
    os.chdir(path)  # 切换工作目录至result文件夹
    for sheet in wb:
        try:
            my_sheet = MySheet(sheet, cf)
        except AssertionError:
            print(sheet.title, '非法，跳过：该工作表不满足分析条件\n')
        except KeyError:
            print(
                sheet.title,
                '非法，跳过：该工作表没有找到config.ini中的某个列名，请检查工作表或正确修改config.ini\n')
        except MatchingException as e:
            print(
                sheet.title,
                '非法，跳过：请检查第',
                e.row,
                '行 数据是否有误（Logical Register和Bit Position不匹配）\n')
        except InvalidNumException as e:
            print(sheet.title, '非法，跳过：请检查', e.row, '行', e.column, '列 数据是否有误\n')
        except BaseException:
            print(sheet.title, '非法，跳过：未知错误\n')
        else:
            try:
                my_sheet.simple_result()
            except ValueError:
                print(sheet.title, '非法，跳过：数值错误，请检查Physical Register数据是否有误\n')
            else:
                print(sheet.title, '分析完成\n')
            finally:
                del my_sheet
    print("完成，已提取符合要求的工作表的信息，并在当前目录result文件夹下生成若干h文件\n")
    os.system('pause')


def result(my_sheet):
    filename = (my_sheet.sheet_name.lower() + '.h')
    f = open(filename, 'w')
    # 写头
    dt = datetime.now()
    print(
        '//******************************************************************************',
        file=f)
    print('// Copyright     :  Copyright (C) ' +
          str(dt.year) + ', goke Technologies Co., Ltd.', file=f)
    print('// File name     :  '+filename, file=f)
    print('// Version       :  1.0', file=f)
    print('// Date          :  ' + str(dt.year) + '-' +
          str(dt.month) + '-' + str(dt.day), file=f)
    print('// Description   :  ', file=f)
    print('// History       :  ' + str(dt.year) + '-' +
          str(dt.month) + '-' + str(dt.day) + ' Create file', file=f)
    print('// Author        :  beishui',file=f)
    print(
        '//******************************************************************************\n',
        file=f)
    print('#ifndef __' + my_sheet.sheet_name.upper() + '_H__', file=f)
    print('#define __' + my_sheet.sheet_name.upper() + '_H__\n', file=f)
    print('\n\n', file=f)

    # 写代码主体
    # 遍历regList
    length = len(my_sheet.high_list)
    i = 0

    while i < length:
        if my_sheet.phy_list[i]:  # 一个寄存器开头
            reserved_count = 0
            union_name = my_sheet.reg_name_list[i]
            print(
                'typedef union' +
                '\n' +
                '{\n    /* Define the struct bits */\n    struct\n    {',
                file=f)
        if my_sheet.reg_list[i] == 'reserved':
            del my_sheet.reg_list[i]
            my_sheet.reg_list.insert(i, 'reserved' + str(reserved_count))
            reserved_count = reserved_count + 1

        # 根据高低位是否相同来改变注释的写法
        if my_sheet.high_list[i] == my_sheet.low_list[i]:
            print('        unsigned int    ' +
                  '{:30}'.format(my_sheet.reg_list[i].lower()) +
                  ' : ' +
                  '{:2}'.format(str(my_sheet.high_list[i] -
                                    my_sheet.low_list[i] +
                                    1)) +
                  '  ; /* [' +
                  '{:2}'.format(str(my_sheet.high_list[i])) +
                  ']      */', file=f)
        else:
            print('        unsigned int    ' +
                  '{:30}'.format(my_sheet.reg_list[i].lower()) +
                  ' : ' +
                  '{:2}'.format(str(my_sheet.high_list[i] -
                                    my_sheet.low_list[i] +
                                    1)) +
                  '  ; /* [' +
                  '{:2}'.format(str(my_sheet.high_list[i])) +
                  '..' +
                  '{:2}'.format(str(my_sheet.low_list[i])) +
                  ']  */', file=f)
        if i == length - 1 or my_sheet.phy_list[i + 1]:  # 一个寄存器结尾
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
    length = len(my_sheet.high_list)
    i = 0
    reserved_count = 0
    lastI = 0  # 记录上一个phy有值的I的值
    while i < length:
        if my_sheet.phy_list[i]:  # phy[i]有值
            if i == 0:
                if int(my_sheet.phy_list[i], 16) != 0x00:
                    tmp = int(my_sheet.phy_list[i], 16) - 0x00
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
            elif int(my_sheet.phy_list[i], 16) - int(my_sheet.phy_list[lastI], 16) > 1:
                tmp = int(my_sheet.phy_list[i], 16) - \
                      int(my_sheet.phy_list[lastI], 16)
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
                    my_sheet.reg_name_list[i].upper()) +
                '   ' +
                my_sheet.reg_name_list[i] +
                ';',
                file=f)
            lastI = i
        i = i + 1

    # 添加end
    if my_sheet.phy_end is not None:
        tmp = my_sheet.phy_end - int(my_sheet.phy_list[lastI], 16)
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
    print('} S_' + my_sheet.sheet_name.upper() + '_REGS_TYPE;\n', file=f)

    # 写文件尾
    print('\n\n#endif \n', file=f)
    f.close()


main()
