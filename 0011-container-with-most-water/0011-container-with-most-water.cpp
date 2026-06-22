class Solution {
public:
    int maxArea(vector<int>& height) {
        int sz=height.size();
        int max=0;
        int oldmax=0;
        int p1=0;
        int p2=sz-1;

        while(p1!=p2){
            max=min(height[p1],height[p2])*(p2-p1);
            if(oldmax<max){
                oldmax=max;
            }
            if(height[p1]>height[p2]){
                p2--;
            }
            else{
                p1++;
            }
            }
            return oldmax;
        
    }
};