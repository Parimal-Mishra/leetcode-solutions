sys.set_int_max_str_digits(100000)

class Solution:
    def addToArrayForm(self, num: list[int], k: int) -> list[int]:
        s=int("".join(str(x) for x in num))
        s+=k
        l=[int(x) for x in str(s)]
        return l