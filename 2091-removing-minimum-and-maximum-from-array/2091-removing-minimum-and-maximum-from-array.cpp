class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int min_idx,max_idx;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                max_idx=i;
            }
            if(nums[i]<mini){
                mini=nums[i];
                min_idx=i;
            }
        }

        int s=nums.size();
        int l=min(min_idx,max_idx);
        int r=max(min_idx,max_idx);
        
        return min(min(r+1,s-l),l+1+(s-r));
    }
};