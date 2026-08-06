class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        vector<int> ans;
        for(auto x:map){
            int ele=x.first;
            int count=x.second;

            if(count >nums.size()/3){
                ans.push_back(ele);
            }
        }
        return ans;
    }
};