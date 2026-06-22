class Solution {
public:
    int mySqrt(int x) {
        int root=1;
        //bool a=true;
        while(true){
            if(root==x/root){
                return root;
            }
            if(root>x/root){
                return root-1;
            }
            root++;
        }
        return -1;
    }
};