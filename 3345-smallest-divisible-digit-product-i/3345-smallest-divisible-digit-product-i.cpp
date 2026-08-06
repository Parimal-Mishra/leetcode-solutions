class Solution {
    int product(int x){
            int p=1;
            while (x>0){
                int a=x%10;
                p*=a;
                x/=10;
            }
            return p;
        }
public:
    int smallestNumber(int n, int t) {
        while(true){
            if(product(n)%t==0){
                return n;
            }
            else{
                n+=1;
            }
        }
    }
};