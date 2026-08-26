class Solution {
public:
    char findTheDifference(string s, string t) {
       int arr[26] = {0};
       for(int i=0; i<t.size(); i++) {
        arr[t[i]-'a']++;
       }
       for(char c : s) {
        arr[c-'a']--;
       } 

       
       for(int i=0; i<t.size(); i++) {
        if(arr[t[i]-'a'] > 0) {
            return t[i];
        } 
       }
       return '-1';
    }
};