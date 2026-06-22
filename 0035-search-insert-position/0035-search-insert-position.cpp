class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int x=0;
        int st=0;
        int pos;
        int end=nums.size()-1;
        if(target<nums[0]){
            return 0;
        }
        if(target>nums[end]){
            return end+1;
        }

        for(int i=0;i<=end;i++){
            if(nums[i]==target){
                return i;
            }
        }
        for(int i=0;i<=end;i++){
            if(target<nums[i]){
                return i;
            }
        }
        return 0;

    }
};