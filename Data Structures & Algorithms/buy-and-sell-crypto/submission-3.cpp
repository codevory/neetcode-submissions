class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int n = prices.size();

          int buy = prices[0];
        for(int i = 1; i < n; i++){
          max_profit = max(max_profit,prices[i] - buy);
          if(prices[i] < buy){
            buy = prices[i];
          }
         }

        return max_profit;
    }
};
