class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = ""; 
        for(char c: s){
            if(isalnum(c)){
                newStr += tolower(c); 
            }
        }
        //return newStr == string(newStr.rbegin(), newStr.rend()); 
        string reverse = string(newStr.rbegin(), newStr.rend()); 
        return reverse == newStr; 
    }
};
