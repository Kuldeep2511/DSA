// jai shree ram
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < prices.size(); i++) {
            mini = min(mini, prices[i]);
            maxi = max(maxi, (prices[i] - mini));
        }
        if (maxi > 0) return maxi;
        else return 0;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4}; 
    int result = sol.maxProfit(prices);
    cout << "Maximum Profit: " << result << endl;
    return 0;
}
