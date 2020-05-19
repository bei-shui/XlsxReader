import os

import openpyxl

from lib.my_exception import InvalidNumException
from lib.my_exception import MatchingException
from lib.readconfig import ReadConfig
from lib.sheet import MySheet


def main():
    # 读文件
    cf = ReadConfig()
    filename = './input/'+cf.file_name
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
        #except BaseException:
            #print(sheet.title, '非法，跳过：未知错误\n')
        else:
            try:
                my_sheet.result()
            except ValueError:
                print(sheet.title, '非法，跳过：数值错误，请检查Physical Register数据是否有误\n')
            else:
                print(sheet.title, '分析完成\n')
            finally:
                del my_sheet
    print("完成，已提取符合要求的工作表的信息，并在当前目录result文件夹下生成若干h文件\n")
    os.system('pause')


main()
