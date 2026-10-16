class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> final(nums1.size() + nums2.size());
merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), final.begin());
        int n=final.size();
        if (n % 2 == 0) {
            return (double)(final[(n / 2) - 1] + final[n / 2]) / 2.0;
        }       
        else {
            return final[n / 2];
        }
    }
};