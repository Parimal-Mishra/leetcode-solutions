class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        min1=prices[0]
        max_profit=0
        for i in prices:
            max_profit=max(max_profit,i-min1)
            min1=min(min1,i)
        return max_profit