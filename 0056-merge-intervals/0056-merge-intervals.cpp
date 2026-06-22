class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>ans;
        int sz=intervals.size();
        int high=intervals[0][1],low=intervals[0][0];
        ans.push_back(intervals[0]);

        int count=0;
        for(int i=0;i<sz;i++){
            if(high<intervals[i][0]){
                ans.push_back(intervals[i]);
                high=intervals[i][1],low=intervals[i][0];
            }
            else{
                high=max(high,intervals[i][1]);
                low=min(low,intervals[i][0]);
                ans.pop_back();
                ans.push_back({low,high});
            }
            }
        return ans;
    }
};