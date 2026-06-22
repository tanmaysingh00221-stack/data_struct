class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      vector<int> hash(256, 0);
      int ans=0;
      int z=0;
      int act_ans=0;
      for(int i=0;i<s.length();i++){
        hash[s[i]]++;
        if(hash[s[i]]!=1){
            z++;
            i=z-1;  
            ans=0; 
            fill(hash.begin(), hash.end(), 0);
                continue;
        }
        ans++;
        act_ans=max(act_ans,ans);
      }
      return act_ans;
    }
};