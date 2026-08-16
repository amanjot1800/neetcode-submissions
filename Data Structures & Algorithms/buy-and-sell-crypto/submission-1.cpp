class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;

        int buy = 0;
        int sell = 1;

        for (int i = 1; i< prices.size(); i++) {

            if (prices[sell] > prices[buy]) {
                max_profit = max(max_profit, prices[sell]-prices[buy]);
            } else {
                buy = sell;
            }
            sell++;
        }
        return max_profit;
    }
};
