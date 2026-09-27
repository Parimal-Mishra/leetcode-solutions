class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        vector<int>a=nums;
        int ans=0;
        int base=0;
        map<pair<int,int>,int>mp;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            base++;
            else
            {
                int b=max(nums[i],nums[i+1]);
                int a=min(nums[i],nums[i+1]);
                mp[{a,b}]++;
            }
        }
        for(auto x:mp)
            {
                ans=max(ans,x.second);
            }
        return base + ans;
    }
};