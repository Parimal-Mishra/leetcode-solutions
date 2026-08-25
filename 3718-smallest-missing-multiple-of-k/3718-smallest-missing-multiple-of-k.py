class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        flag = True
        i=1
        smallest = k
        while(flag):
            if smallest not in nums :
                flag = False 
                return smallest
            smallest = k * i
            i+=1
         
        