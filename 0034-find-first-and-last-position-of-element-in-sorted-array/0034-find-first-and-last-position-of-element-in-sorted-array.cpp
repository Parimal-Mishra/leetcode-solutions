class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low,high,mid;
        int mini=-1,maxi=-1;
        
        low=0;high=nums.size()-1;

        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                mini=mid;
                high=mid-1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        low=0;high=nums.size()-1;

        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                maxi=mid;
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return {mini,maxi};
    }
};