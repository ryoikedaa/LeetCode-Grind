class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;   // buy day
        int right = 1;  // sell day
        int maxProfit = 0;

        while (right < prices.size()) {
            if (prices[left] < prices[right]) {
                int profit = prices[right] - prices[left];
                if (profit > maxProfit) {
                    maxProfit = profit;
                }
            } else {
                left = right;  // reset buy day
            }
            right++;
        }
        return maxProfit;
    }
};
