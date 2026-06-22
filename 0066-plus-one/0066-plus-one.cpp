class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sz=digits.size();
        int y=0;
        if(digits[sz-1]==9){
            for(int i=sz-1;i>=0;i--){
                if(digits[i]!=9){
                    y=i;
                    break;
                }
                else if(i==0){
                      digits[0]=1;
                for(int i=1;i<sz;i++){
                    digits[i]=0;
                }
                digits.push_back(0);
                return digits;
                }
            }
             digits[y]=digits[y]+1;
             for(int i=y+1;i<sz;i++){
                digits[i]=0;
             }
             return digits;
        }
        else{
        digits[sz-1]=digits[sz-1]+1;
        return digits;}
        
    }
};
