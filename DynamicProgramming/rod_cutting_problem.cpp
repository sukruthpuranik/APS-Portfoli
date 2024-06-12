/*
Problem: Rod Cutting Problem
Source: Common algorithmic problem

Description:
Given a rod of length n and an array of prices that contains prices of all pieces of size smaller than n. Determine the maximum value obtainable by cutting up the rod and selling the pieces.
Use Case at Google: Resource Optimization
Cloud Resource Allocation:

Challenge: Efficiently allocate cloud resources to maximize revenue and minimize wastage.
Application: Similar to cutting a rod to maximize profit, this algorithm can help optimize the allocation of cloud resources of different sizes to various tasks, ensuring maximum utilization.
Advertisement Revenue Maximization:

Challenge: Determine the optimal pricing and placement of ads to maximize revenue.
Application: Just as the algorithm maximizes profit from rod segments, it can be adapted to optimize the distribution and pricing of ads.
Solution:
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int rodCutting(vector<int>& prices, int n) {
    vector<int> dp(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        int max_val = INT_MIN;
        for (int j = 0; j < i; ++j) {
            max_val = max(max_val, prices[j] + dp[i - j - 1]);
        }
        dp[i] = max_val;
    }
    return dp[n];
}

int main() {
    vector<int> prices = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = 8;
    cout << "Maximum obtainable value is " << rodCutting(prices, n) << endl;
    return 0;
}
