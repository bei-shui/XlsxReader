# XlsxReader

读取寄存器表，生成其定义和操作C代码

## 目录结构
 
* app              应用  
    * RegisterControl  寄存器控制    
        * input  需要生成控制代码的结构体定义h文件
        * result  生成的寄存器控制代码
        * main.exe  pyinstaller生成的Windows可执行程序
        * main.py  源代码
    * RegisterDefine  寄存器定义
        * input  生成代码所需文件
            * config.ini 配置相关
            * test.xlsx  待生成代码的工作表
        * result  生成的寄存器定义代码
        * simple_result  生成的寄存器定义代码（简单版本）
        * main.exe  pyinstaller生成的Windows可执行程序
        * main.py  源代码
        * simple.exe  pyinstaller生成的Windows可执行程序
        * simple.py  源代码
* lib  依赖的模块    
* venv             Python所需虚拟环境      
* README.md        本文件  



## 使用方法：
1. RegisterDefine
    - step1:打开input目录，放入需要分析的表，并使用文本编辑工具（如notepad++）打开config.ini文件，根据提示修改其中的内容（除Register Name之外都是必填项）

    - step2:返回上层目录双击运行main.exe即可，程序会根据合法的sheet生成h文件(当前目录的result文件夹下），不合法的sheet会给出一些提示信息，如果确认该sheet是需要分析的，请根据提示修正该sheet的错误

    - step3:如有python3环境可直接运行main.py脚本（不建议采用此种方式，可能缺少必要的模块）

    - note:受限于python本身特性和第三方模块openpyxl，同时分析过多sheet时程序运行缓慢，建议将过多sheet的工作簿拆分开，尽量保证一个文件内包含的sheet不超过10个

2. RegisterControl
   - step1:打开input目录，放入需要生成寄存器控制的h文件（仅支持分析RegisterDefine生成的h文件）
   - step2：返回上层目录，运行main.exe或main.py即可

## 北水 2020.5.18