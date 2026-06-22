class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sz=nums.size();
      
        vector<vector<int>>ans1; 
        int i=0;
    
        while(i<sz-1){
            if(i > 0 && nums[i] == nums[i-1]) {
                i++;
                continue;}
            int j=i+1;
            int k=sz-1;
            int target=-nums[i];
            while(j<k){
                if(nums[j]+nums[k]==target){
                    ans1.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                      while(j < k && nums[j] == nums[j-1]) j++;
                      while(j < k && nums[k] == nums[k+1]) k--;
                }

                else if(nums[j]+nums[k]>target) k--;
                else j++;
            }
            i++;
        }
        return ans1;
    }
};