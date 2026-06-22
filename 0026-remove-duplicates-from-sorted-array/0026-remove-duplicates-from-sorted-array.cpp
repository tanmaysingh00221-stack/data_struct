class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sz=nums.size();
        int find=0;
        for(int i=0;i<sz;i++){
            if(nums[i]!=nums[find]){
                swap(nums[find+1],nums[i]);
                find++;
            }
        }
        return find+1;
    }
};