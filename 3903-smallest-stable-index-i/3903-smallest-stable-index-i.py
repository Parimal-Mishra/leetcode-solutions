class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        i=0
        ans=-1
        while(i<len(nums)):
            maxi=max(nums[0:i+1])
            mini=min(nums[i:len(nums)])
            if(maxi-mini <= k):
                ans=i
                break
            i+=1
        return ans
