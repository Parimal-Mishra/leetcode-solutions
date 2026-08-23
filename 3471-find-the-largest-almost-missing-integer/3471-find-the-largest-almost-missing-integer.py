class Solution:
    def largestInteger(self, nums: List[int], k: int) -> int:
        if k==1:
            a=max(filter(lambda x: nums.count(x)==1 ,nums),default=-1)
            return a
        elif k==len(nums):
            return max(nums)
        
        else:
            if nums.count(nums[0]) == 1 and nums.count(nums[-1]) == 1 :
                return max(nums[0],nums[-1])
            elif nums.count(nums[0]) != 1 and nums.count(nums[-1]) == 1 :
                return nums[-1]
            elif nums.count(nums[0]) == 1 and nums.count(nums[-1]) != 1 :
                return nums[0]
            else:
                return -1