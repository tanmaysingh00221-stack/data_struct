class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend>=INT_MAX){
            if(divisor==-1) return -dividend;
            else if(divisor==1) return INT_MAX;
        }
        if(dividend<=INT_MIN){
            if(divisor==1) return INT_MIN;
            else if(divisor==-1)  return INT_MAX;
        }
        int ans= dividend/divisor;
        return ans;
    }
};