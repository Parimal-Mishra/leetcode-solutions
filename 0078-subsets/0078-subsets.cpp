class Solution {
public:
    void recursive(int ind, vector<vector<int>>& ans, vector<int>& ds, vector<int>& nums) {
        ans.push_back(ds);
        for (int i = ind; i < nums.size(); i++) {
            ds.push_back(nums[i]);
            recursive(i + 1, ans, ds, nums);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        recursive(0, ans, ds, nums);
        return ans;
    }
};