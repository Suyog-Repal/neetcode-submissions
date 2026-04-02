class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result; 
        unordered_map<int, int> freq; 
        for(int x: nums) freq[x]++; 
        vector<pair<int, int>> res; 
        for(auto &p: freq){
            res.push_back({p.first, p.second}); 
        }
         sort(res.begin(), res.end(), [](auto &a, auto &b){
              return a.second > b.second; 
         });
         for(int i =0; i<k; i++){
            result.push_back(res[i].first); 
         }
         return result; 
    }
};
