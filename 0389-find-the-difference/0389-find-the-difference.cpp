class Solution {
public:
    char findTheDifference(string s, string t) {
       int count = 0;
       for(auto c:t) {
        count += c;
       }
       for(auto c : s) {
        count -= c;
       }
       return char(count);
    }
};