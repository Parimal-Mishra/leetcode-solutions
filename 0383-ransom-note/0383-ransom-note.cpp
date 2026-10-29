class Solution {
public:
    bool canConstruct(string t, string s) {
        unordered_map <char,int> mp;
        for(auto c : s){
            mp[c]++;
        }
        for(auto c : t){
            if(mp[c]<=0){
                return false;
            }
            mp[c]--;
        }
        return true;
    }
};