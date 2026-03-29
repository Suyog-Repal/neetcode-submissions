class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<int, int> freq; 
        for(int x : t) freq[x]++; 
        for(int x : s) freq[x]--; 
        for(auto &p : freq){
            if(p.second != 0) return false; 
        }
        return true; 
    }
};
