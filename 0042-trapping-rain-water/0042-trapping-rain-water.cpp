class Solution {
public:
    int trap(vector<int>& h) {
        int  l=0, r=h.size()-1;
        int lm=h[l],rm=h[r];
        int water=0;
        while(l<r){
            if(lm<rm){
                l+=1;
                if(h[l]>=lm){
                    lm=h[l];
                }
                else{
                    water+=lm-h[l];
                }
            }
            else{
                r-=1;
                if(h[r]>=rm){
                    rm=h[r];
                }
                else{
                    water+=rm-h[r];
                }
            }
        }
        return water;
    }
};