class Solution {
public:
    string reversePrefix(string s, int k) {
        string ans="";
        string pre="";
        for(int i=0;i<k;i++){
            pre+=s[i];
        }
        reverse(pre.begin(),pre.end());
        for(int i=0;i<s.size();i++){
            if(i<k){
                ans+=pre[i];
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};