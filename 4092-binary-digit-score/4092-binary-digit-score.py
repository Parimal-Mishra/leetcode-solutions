class Solution:
    def calculateScore(self, a: int, b: int) -> int:
        set1=bin(a)
        set2=bin(b)
        s1=set1.count('1')
        s2=set2.count('1')

        return s1*s2 if s1>=s2 else s2//s1