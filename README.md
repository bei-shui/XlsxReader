# XlsxReader

读取寄存器表，并根据寄存器表生成结构体定义代码

## 目录结构

result           存放生成代码的目录  
venv             Python所需虚拟环境  
config.ini       配置文件  
main.exe         pyinstaller打包生成的Windows下可执行程序  
main.py          主函数文件  
my_exception.py  异常类  
readconfig.py    处理配置文件的类  
README.md        本文件  
sheet.py xlsx    表相关类


## 使用方法：
1.使用文本编辑工具（如notepad++）打开config.ini文件，根据提示修改其中的内容（除Register Name之外都是必填项）

2.双击运行main.exe即可，程序会根据合法的sheet生成h文件(当前目录的result文件夹下），不合法的sheet会给出一些提示信息，如果确认该sheet是需要分析的，请根据提示修正该sheet的错误

3.如有python3环境可直接运行main.py脚本（不建议采用此种方式，可能缺少必要的模块）


## 注意事项：
1.受限于python本身特性和第三方模块openpyxl，同时分析过多sheet时程序运行缓慢，建议将过多sheet的工作簿拆分开，尽量保证一个文件内包含的sheet不超过10个

## 北水 2019.11.19