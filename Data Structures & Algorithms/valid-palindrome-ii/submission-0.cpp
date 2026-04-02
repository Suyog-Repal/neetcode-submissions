class Solution {
    private: 
    bool isPalindrome(string &s){
        int l = 0;
        int r = s.size()-1; 
        while(l<r){
            while(l<r && !isalnum(s[l])) l++; 
            while(l<r && !isalnum(s[r])) r--; 
            if(s[l] != s[r]) return false; 
            l++; 
            r--; 
        }
        return true; 
    }
public:
    bool validPalindrome(string s) {
        if(isPalindrome(s)){
            return true; 
        }
        int n = s.size(); 
        for(int i =0; i<n; i++){
          string newStr = s.substr(0, i) + s.substr(i+1); 
          if(isPalindrome(newStr)) return true; 
        }
        return false; 
    }
};