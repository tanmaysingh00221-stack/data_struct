class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int sz=nums.size();
      int fn;
      unordered_map<int,int>hash;
      for(int i=0;i<sz;i++){
        fn=target-nums[i];
        if(hash.find(fn)!=hash.end()){
            return {hash[fn],i};
        }
        hash[nums[i]]=i;
      }
      return {};
    }
};