class InvalidNumException(Exception):
    """bit position越界的异常"""

    def __init__(self, column, row):
        self.row = row
        self.column = column


class MatchingException(Exception):
    # bit和reg不匹配
    def __init__(self, row):
        self.row = row
