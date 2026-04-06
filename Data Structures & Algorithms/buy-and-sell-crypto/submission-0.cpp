class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX; 
        int n = prices.size(); 
        int max_profit = 0; 
        for(int i =0; i<n; i++){
            if(prices[i] < minPrice){
                minPrice = prices[i]; 
            }
            int profit = prices[i] - minPrice; 
            max_profit = max(max_profit, profit); 

        }
        return max_profit;

    }
};
