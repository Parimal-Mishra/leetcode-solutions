class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums)
        {
            mp[x]++;
        }

        for(auto x:mp)
        {
            if(x.second>2)
            return 0;
        }
        return 1;
    }
};