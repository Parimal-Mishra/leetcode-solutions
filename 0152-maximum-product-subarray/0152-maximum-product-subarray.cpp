class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=nums[0];
        int maxPro=nums[0];
        int minPro=nums[0];
        for(int i=1; i<nums.size();i++){
            if(nums[i]<0){
                swap(minPro,maxPro);
            }
            minPro=min(minPro*nums[i],nums[i]);
            maxPro=max(maxPro*nums[i],nums[i]);
            res=max(res,maxPro);
        }
        return res;
    }
};