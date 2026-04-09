class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int>freq; 
        int maxi = INT_MIN; 
        int maxFreq = 0; 
        int l = 0; 
        for(int r = 0; r<s.size(); r++){
            freq[s[r]]++; 
            if(maxFreq < freq[s[r]]){
                maxFreq = freq[s[r]]; 
            }
            while(r-l+1 - maxFreq > k){
                freq[s[l]]--; 
                if(freq[s[l]] == 0) freq.erase(s[l]); 
                l++; 
            }
            maxi = max(maxi, r-l+1); 
        }
        return maxi; 
    }
};
