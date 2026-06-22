class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count;
        int sz=nums.size();
        if(sz==1){
            if(nums[0]==val){
                return 0;
            }
            else return 1;

        }
        
        for(int i=0;i<sz;i++){
            if(nums[i]==val){
                for(int z=i;z<sz;z++){
                    if(nums[z]!=val){
                        swap(nums[i],nums[z]);
                        i++;
                        count =i;
                        
                    }
                }
            }
            return count;
        }
        return 0;
    }
};