class Solution:
    def maximumValue(self, strs: list[str]) -> int:
        m=0
        for i in strs:
            if i.isdigit():
                l=int(i)
                m=max(m,l)
            else:
                m=max(len(i),m)
        return m
        