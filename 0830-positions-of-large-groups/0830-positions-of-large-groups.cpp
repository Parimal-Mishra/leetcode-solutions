class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> res;
        int start = 0;
        int end = 1;
        while(end < s.size()){
            if(s[end] == s[start]) {
                end++;
            } else if(s[end] != s[start]) {
                if(end-1-start+1 > 2) {
                    vector<int> temp;
                    temp.push_back(start);
                    temp.push_back(end-1);
                    res.push_back(temp); 
                }
                start = end;
                end++;
            }
        }
        if(end-1-start+1 > 2) {
                    vector<int> temp;
                    temp.push_back(start);
                    temp.push_back(end-1);
                    res.push_back(temp); 
                }
        return res;
    }
};