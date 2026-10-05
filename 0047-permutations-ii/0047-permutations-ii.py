class Solution:
    def permuteUnique(self, nums: list[int]) -> list[list[int]]:
        res = []

        def per(a, l, r):
            if l == r:
                if a[:] not in res:
                    res.append(a[:])
            else:
                for i in range(l, r + 1):
                    a[l], a[i] = a[i], a[l]
                    per(a, l + 1, r)
                    a[l], a[i] = a[i], a[l]

        per(nums, 0, len(nums) - 1)
        return res