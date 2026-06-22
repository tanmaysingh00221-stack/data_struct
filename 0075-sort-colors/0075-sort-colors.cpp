class Solution {
public:
    void sortColors(vector<int>& nums) {
      int sz=nums.size();
      int p1=0;
      int p2=0;
      int p3=sz-1;
      while(p2<=p3){
       
        if(nums[p2]==0){
            swap(nums[p1++],nums[p2++]);
        }
        else if(nums[p2]==1){
            p2++;
        }
        else if(nums[p2]==2){
            swap(nums[p3--],nums[p2]);
        }

      }
      
    }
};