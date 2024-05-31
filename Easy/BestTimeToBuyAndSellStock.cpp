//
// Created by Dino Kupinic on 04.11.23.
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include "vector"

using namespace std;

class Solution {
public:
  static int maxProfit(const vector<int>& prices) {
    int minPrice = prices[0];
    int profit = 0;
    for (int i = 1; i < prices.size(); ++i) {
      if (minPrice > prices[i]) {
        minPrice = prices[i];
      } else {
        profit = max(profit, prices[i] - minPrice);
      }
    }
    return profit;
  }
};
