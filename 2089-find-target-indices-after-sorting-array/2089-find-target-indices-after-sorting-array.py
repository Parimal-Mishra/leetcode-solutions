class Solution:
    def targetIndices(self, nums: list[int], target: int) -> list[int]:
        nums.sort()
        l=[]
        for i,j in enumerate(nums):
            if j==target:
                l.append(i)
        return l