class Solution {
public:

    string encode(vector<string>& strs) {
       int n = strs.size(); 
       string encoded_string = "";
       for(int i =0; i<n; i++){
        int x = strs[i].size(); 
         encoded_string += to_string(x) + "#" + strs[i]; 
       }
       return encoded_string; 
    }

    vector<string> decode(string s) {
        vector<string> result; 
        int i = 0; 
        while(i<s.size()){
            int j = i; 
            while(s[j] != '#'){
                j++; 
            }
            int length = stoi(s.substr(i, j-i)); 
            string word = s.substr(j+1, length); 
            result.push_back(word); 
            // moving i to next start of the word 
            i = j+1+length; 
        }
        return result; 

    }
};
