class Solution {
public:
    int lengthOfLastWord(string s) {
        int sz=s.length();
        if(s[sz-1]==' '){
            int count=0;
            for(int i=sz-1;i>=0 && s[i]==' ' ;i--){
                count++;
            }
            int countnew=0;
            if(count==0) return 0;
            for(int i=sz-count-1;i>=0 && s[i]!=' ' ;i--){
                countnew++;
            }
            return countnew;
        }
        else{
            int countnew=0;
           for(int i=sz-1;i>=0 && s[i]!=' ' ;i--){
                countnew++;
            }
            return countnew;
            }
    }
};