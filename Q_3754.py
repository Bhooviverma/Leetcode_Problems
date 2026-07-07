class Solution:
    def sumAndMultiply(self, n: int) -> int:
        x = ""
        for digit in str(n):
            if digit != '0':
                x += digit
        if x == "":
            return 0  
        digit_sum = 0
        for digit in x:
            digit_sum += int(digit)
        return int(x) * digit_sum
