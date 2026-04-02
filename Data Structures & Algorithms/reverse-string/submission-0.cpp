class Solution {
public:
    void reverseString(vector<char>& s) {
         int n = s.size(); 
         vector<char> result; 
         for(int i = 0; i<n; i++){
            result.push_back(s[n-i-1]); 
         } 
         for(int i = 0; i<n; i++){
            s[i] = result[i]; 
          }
        

    }
};