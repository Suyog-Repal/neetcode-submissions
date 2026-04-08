class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0; 
        unordered_map<int, int> freq; 
        int l = 0; 
        int n = s.size(); 
        for(int r = 0; r<n; r++){
              freq[s[r]]++; 
              while(freq[s[r]] > 1){
                freq[s[l]]--; 
                l++; 
              }
              ans = max(ans, r-l+1); 
        }
        return ans; 
    }
};
