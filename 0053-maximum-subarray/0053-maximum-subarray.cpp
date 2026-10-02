class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0];
        int maxCurr=nums[0];
        for (int i=1;i<nums.size();i++){
            maxCurr=max(maxCurr+nums[i],nums[i]);
            res=max(res,maxCurr);
        }
        return res;
    }
};