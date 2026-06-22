class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int max1=0;
     int sz=nums.size();
     int truemax=nums[0];
     vector<int>arr;
     for(int i=0;i<sz;i++){
        max1=max1+nums[i];
        truemax=max(max1,truemax);
        if(max1<0) max1=0;
     }
     return truemax;

    }
};