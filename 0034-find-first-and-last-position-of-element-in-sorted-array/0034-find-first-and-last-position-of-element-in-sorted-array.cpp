class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int sz=nums.size();
        int mid;
        int low=0;
        int high=sz-1;
        int foundl=-1;
        int foundh=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(target==nums[mid]){
                foundl=mid;
                foundh=mid;
                break;
            }
            else if(target>nums[mid]){
                low=mid+1;
                continue;
            }
            else {
                high=mid-1;
                continue;
            }
        }
        if(foundl!=-1){
            while(foundl!=0){
                if(nums[foundl]==nums[foundl-1]) foundl--;
                else break;
            }
            while(foundh!=sz-1){
                if(nums[foundh]==nums[foundh+1]) foundh++;
                else break;
            }
        }
       return {foundl,foundh};
    }
    
};