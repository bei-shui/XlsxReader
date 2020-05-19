import configparser


class ReadConfig:
    """通过configparser模块读取config信息"""
    file_name = ''
    phy = ''
    reg_name = ''
    reg = ''
    bit = ''
    read_write=''
    order = 0  # 升序为0，降序为1

    def __init__(self):
        cf = configparser.ConfigParser()
        cf.read("./input/config.ini",encoding='utf-8')
        self.file_name = cf.get('section1', 'filename')
        self.phy = cf.get('section1', 'Physical Register')
        self.reg_name = cf.get('section1', 'Register Name')
        self.reg = cf.get('section1', 'Logical Register')
        self.bit = cf.get('section1', 'Bit Position')
        self.read_write=cf.get('section1','R/W')
        self.order = cf.get('section1', 'Descending order')
