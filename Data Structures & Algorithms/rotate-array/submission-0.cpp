class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(); 
        vector<int> result(n); 
         // handle the large k; 
         k = k%n; 
         for(int i =0; i<n; i++){
            result[(i+k)%n] = nums[i]; 
         }
         nums = result; 
    }
};