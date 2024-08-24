//
// Created by Dino Kupinic on 24.08.24.
// https://leetcode.com/problems/sort-array-by-parity/description/

#include <vector>

using namespace std;

class Solution {
public:
  static vector<int> sortArrayByParity(vector<int>& nums) {
    vector<int> sorted{};

    for (int num : nums) {
      if (num % 2 == 0) {
        sorted.insert(sorted.begin(), num);
      } else {
        sorted.push_back(num);
      }
    }

    return sorted;
  }
};
