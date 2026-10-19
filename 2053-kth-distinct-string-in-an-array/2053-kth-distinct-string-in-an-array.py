class Solution:
    def kthDistinct(self, arr: list[str], k: int) -> str:
        d=dict()
        for i in arr:
            d[i]=arr.count(i)
        l=[]
        for i in d:
            if d[i]==1:
                l.append(i)
        print(l)
        return l[k-1] if k<=len(l) else ""