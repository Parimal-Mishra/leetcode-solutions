class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0;
        int pre=0;
        for(auto x:gain){
            pre+=x;
            maxi=max(maxi,pre);
        }
        return maxi;
    }
};