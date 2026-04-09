class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> freq; 
        int n = nums.size(); 
        vector<int> result; 
        for(int i =0; i<n; i++){
            int temp = nums[i]; 
            if(!freq.count(temp)){
                result.push_back(temp); 
            }
            freq[temp]++; 
        }
        nums = result; 
        return result.size(); 
    }
};