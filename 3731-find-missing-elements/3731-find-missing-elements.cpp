class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min=nums[0],max=nums[nums.size()-1];
        vector<int> ans;
        for(int i=min;i<=max;i++){
            if (find(nums.begin(), nums.end(), i) == nums.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};