class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int sz=nums.size();
        bool fact=true;
        vector<int> dublicate(nums);
        
        while(fact){
            ans.push_back(nums);
            next_permutation(nums.begin(),nums.end());
            if(dublicate==nums) fact=false;

        }
        return ans;
        
    }
};