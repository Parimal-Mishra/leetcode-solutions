class Solution:
    def scoreOfParentheses(self, s: str) -> int:
        a=[0]
        for i in s:
            if i=="(":
                a.append(0)
            else:
                b=a.pop()
                a[-1]+=max(2*b,1)
        return a.pop()