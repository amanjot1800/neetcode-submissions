class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0;
        int prev = prices[0];

        for (int& curr: prices) {
            maxp = max(maxp, curr-prev);
            prev = min(prev, curr);
        }

        return maxp;
    }
};
