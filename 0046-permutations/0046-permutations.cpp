class Solution {
    void per(vector<int> a, int l, int r,vector<vector<int>>& res) 
        { 
            if (l == r) 
                res.push_back(a); 
            else
            { 
                for (int i = l; i <= r; i++) 
                { 
                    swap(a[l], a[i]); 
                    per(a, l+1, r, res); 
                    swap(a[l], a[i]); 
                } 
            } 
        }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        per(nums, 0, nums.size()-1,res); 
        return res;
    }
};