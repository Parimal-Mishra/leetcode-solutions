class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        auto cmp = [](const string& a, const string& b) {
            if (a.length() != b.length()) {
                return a.length() > b.length();
            }
            return a > b; 
        };

        priority_queue<string, vector<string>, decltype(cmp)> pq(cmp);
        for(auto x:nums){
            pq.push(x);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};