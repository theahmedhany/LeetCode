// 121. Best Time to Buy and Sell Stock : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int mx = 0;

        while (right < prices.size()) {
            if (prices[left] < prices[right]) {
                mx = max(mx, prices[right] - prices[left]);
            } else {
                left = right;
            }
            right++;
        }

        return mx;
    }
};