class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        for(double i=0;i<=x;i++){
            double check=x/i;
            if(check==i){
                return i;
            }
            if(check<i){
                return i-1;
            }


        }
        return 1;
    }
};