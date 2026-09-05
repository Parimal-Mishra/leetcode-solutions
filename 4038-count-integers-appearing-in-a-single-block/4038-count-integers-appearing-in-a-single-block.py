class Solution:
    def countSpecialIntegers(self, nums: list[int]) -> int:
        compressed = [k for k, _ in itertools.groupby(nums)]
        return sum(1 for count in collections.Counter(compressed).values() if count == 1)
        