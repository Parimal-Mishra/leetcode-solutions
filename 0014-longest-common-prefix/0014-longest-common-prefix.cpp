class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string l=strs[0],r=strs[n-1];
        for(int i=0;i<min(l.size(),r.size());i++){
            if(l[i]!=r[i]){
                return ans;
            }
            ans+=l[i];
        }
        return ans;
    }
};