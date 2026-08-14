class Solution {
public:
    int maxProfit(vector<int>& price) {
        int min1=price[0],max_profit=0;
        for(int i=0;i<price.size();i++){
            max_profit = max(max_profit,price[i]-min1);
            min1=min(min1,price[i]);
            }
        return max_profit;

    }
};