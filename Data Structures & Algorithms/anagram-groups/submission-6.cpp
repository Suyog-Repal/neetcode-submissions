class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result; 
        unordered_map<string, vector<string>> res; 
        for(string s: strs){
           string sorted_s = s; 
           sort(sorted_s.begin(), sorted_s.end()); 
           res[sorted_s].push_back(s); 
        }
        for(auto &p: res){
         result.push_back(p.second);
        }
        return result; 
    }
};
