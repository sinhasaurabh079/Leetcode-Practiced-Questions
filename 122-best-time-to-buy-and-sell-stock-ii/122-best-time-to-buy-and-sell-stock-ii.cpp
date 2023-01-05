#include <algorithm>
#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        // Initialize the profit
        int profit = 0;

        // Loop through the prices
        for (int i = 1; i < prices.size(); i++) {
            // If the price increases from the previous day, add the difference to the profit
            // This works because if the price is increasing, it is always profitable to buy the stock at the lower price
            // and sell it at the higher price
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }

        // Return the profit
        return profit;
    }
};
