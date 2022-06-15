//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int n = prices.size();
        int ans = INT_MIN;
        for (auto &x : prices) {
            ans = max(x - mini, ans);
            mini = min(mini, x);
        }
        return max(0, ans);
    }
};
