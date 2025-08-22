#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        // Traverse the price array
        for (int i = 1; i < prices.size(); i++) {
            // If today's price is higher than yesterday's, add the profit
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }
        return profit;
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit (Example 1): " << sol.maxProfit(prices1) << endl;

    // Example 2
    vector<int> prices2 = {1, 2, 3, 4, 5};
    cout << "Maximum Profit (Example 2): " << sol.maxProfit(prices2) << endl;

    // Example 3
    vector<int> prices3 = {7, 6, 4, 3, 1};
    cout << "Maximum Profit (Example 3): " << sol.maxProfit(prices3) << endl;

    return 0;
}
