class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq; 
        for(int x: nums) freq[x]++; 
        vector<int> result; 
        int n = nums.size(); 
        for(auto &p: freq){
            if(p.second > n/3){
                result.push_back(p.first); 
            }
        }
        return result; 
    }
};