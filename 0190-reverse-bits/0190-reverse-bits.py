class Solution:
    def reverseBits(self, n: int) -> int:
        num = format(n,"032b")
        num=num[::-1]
        return int(num,2)