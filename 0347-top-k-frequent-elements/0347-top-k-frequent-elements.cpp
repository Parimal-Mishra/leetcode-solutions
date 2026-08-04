class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        
        for(auto x : nums){
            mp[x]++;
        }
        
        vector<pair<int,int>> p;
        for(auto y:mp){
            p.push_back({y.first,y.second});
        }
        
        vector<int> ans;
        
        auto comp=[](pair<int, int> a , pair<int, int> b) 
        {
            return a.second > b.second;
        };

        
        sort(p.begin(),p.end(),comp);
        
        for(int i=0;i<k;i++){
            ans.push_back(p[i].first);
        }
        return ans;

    }
};