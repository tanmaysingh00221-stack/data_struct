class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long int pal=0;
        int y=x;
        
      while(y!=0){
        pal=pal*10+(y%10);
        y=y/10;
      }
if(pal==x){
    return true;
}
return false;


    }
};