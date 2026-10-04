class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long> ans(n);
        
        long long max_val = 0;
        long long current_score = 0;
        
        for (int i = 0; i < n; i++) {
            max_val = max(max_val, (long long)nums[i]);
            long long conver = nums[i] + max_val;
            current_score += conver;
            ans[i] = current_score;
        }
        
        return ans;
    }
};