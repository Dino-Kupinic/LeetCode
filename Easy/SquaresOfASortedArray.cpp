//
// Created by Dino Kupinic on 09.06.24.
// https://leetcode.com/problems/squares-of-a-sorted-array/description/

#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
  static vector<int> sortedSquares(vector<int>& nums) {
    for (int &num : nums) {
      num = num * num;
    }
    ranges::sort(nums);
    return nums;
  }
};
