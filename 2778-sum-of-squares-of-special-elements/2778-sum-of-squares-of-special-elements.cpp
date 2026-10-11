class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int x=1;x<=n;x++){
            if (n%x==0){
                sum+=nums[x-1]*nums[x-1];
            }
        }
        return sum;
    }
};