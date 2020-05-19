import os
import re

import lib.headfile as headfile


def main():
    path = os.getcwd() + '/input'
    os.chdir(path)
    dirs = os.listdir()
    for file in dirs:
        tag = re.search(r'\.h', file)
        # 分析每一个文件
        if tag:
            if re.search(r'_reg_ctr\.h', file):
                pass
            else:
                result = headfile.HeadFile(file)
                result.result()
                print('找到' + file + '文件，正在分析并生成寄存器控制函数')
    print('对当前目录下所有h文件的分析已完成，请检查新增h文件和c文件')
    os.system('pause')


main()
