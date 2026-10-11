class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int x=0;x<n;x++){
            if (n%(x+1) == 0){
                sum=sum+nums[x]*nums[x];
            }
        }
        return sum;
    }
};