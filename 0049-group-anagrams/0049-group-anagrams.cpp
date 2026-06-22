class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> um;
        
        for(auto x:strs){
            string temp=x;
            sort(x.begin(),x.end());
            um[x].push_back(temp);
        }
        for(auto x:um){
            vector<string> temp2=x.second;
            ans.push_back(temp2);
        }
        return ans;
    }
};