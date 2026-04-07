class Solution {
public:

    string encode(vector<string>& strs) {
       // add the deliminator and its length to the string and return == encoded string
       int n = strs.size(); 
       string encoded_string = ""; 
        for(string s: strs){
            encoded_string += to_string(s.size()) + '#' + s; 
        }
        return encoded_string; 
    }

    vector<string> decode(string s) {
        int i = 0; 
        vector<string> result; 
        while(i<s.size()){
            int j = i; 
            while(s[j] != '#'){
                j++; 
            }
            int length = stoi(s.substr(i, j-i)); 
            string word = s.substr(j+1, length); 
            result.push_back(word); 
            i = j+1+length; 
        }
        return result; 
    }
};
