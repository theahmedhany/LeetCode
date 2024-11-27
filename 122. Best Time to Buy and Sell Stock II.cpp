// 122. Best Time to Buy and Sell Stock II : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_price = 0;

        for (int i = 1; i < prices.size(); i++) {
            max_price += max(prices[i] - prices[i - 1], 0);
        }

        return max_price;
    }
};