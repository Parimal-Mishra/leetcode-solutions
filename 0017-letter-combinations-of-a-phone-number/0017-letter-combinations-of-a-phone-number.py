class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if not digits:
            return []

        a={"2":"abc","3":"def","4":"ghi","5":"jkl","6":"mno","7":"pqrs","8":"tuv","9":"wxyz"}
        l=[""]
        for i in digits:
            x=[]
            for j in l:
                for y in a[i]:
                    x.append(j+y)
            l=x
        return l                

