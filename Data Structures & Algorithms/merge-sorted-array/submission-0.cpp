class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x = m+n; 
        int l = 0; 
        int r = 0; 
        vector<int> result; 

        while(l<m && r<n){
            if(nums1[l] < nums2[r]){
              result.push_back(nums1[l]); 
              l++; 
            }else{
               result.push_back(nums2[r]); 
            r++; 
            } 
        }
        while(l<m){
            result.push_back(nums1[l]); 
            l++; 
        }
        while(r<n){
            result.push_back(nums2[r]); 
            r++; 
        }
        for(int i =0; i<m+n; i++){
            nums1[i] = result[i]; 
        }
    }
};