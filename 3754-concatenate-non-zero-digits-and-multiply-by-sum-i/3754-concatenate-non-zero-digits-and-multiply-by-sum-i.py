class Solution:
    def sumAndMultiply(self, n: int) -> int:
        l=[i for i in str(n) if i != '0']

        if not l:
            return 0

        x=int("".join(l))
        s=sum(int(c) for c in l)
        return(x*s)
