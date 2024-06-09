//
// Created by Dino Kupinic on 09.06.24.
// https://leetcode.com/problems/max-consecutive-ones/description/

#include <vector>

using namespace std;

class Solution {
public:
  static int findMaxConsecutiveOnes(const std::vector<int> &nums) {
    vector<int> consecutives{};
    int count{0};
    for (const int num: nums) {
      if (num == 0) {
        consecutives.push_back(count);
        count = 0;
      } else {
        count += num;
      }
    }

    if (count > 0) {
      consecutives.push_back(count);
    }

    return *max_element(consecutives.begin(), consecutives.end());
  }
};
