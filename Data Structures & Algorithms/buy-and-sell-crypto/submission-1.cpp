class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int maxProfit = 0;
        for(int i=0;i<n;i++){
          buy = min(buy,prices[i]);
          if(buy < prices[i]){
            maxProfit = max(maxProfit,prices[i] - buy);
          }
          if(maxProfit < 1) maxProfit = 0;
        }
        return maxProfit;
    }
};
