class Solution {
public:
    bool checkPerfectNumber(int num) {
        bool flag=true;
        int s=0,a=1;
        while(a<=num/2){
            if(num%a==0){
                s+=a;
            }
            a++;
        }
        if(s!=num){
            flag=false;
        }
        return flag;
    }
};