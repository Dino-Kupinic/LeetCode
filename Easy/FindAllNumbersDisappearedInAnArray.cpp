//
// Created by Dino Kupinic on 24.08.24.
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/

#include <vector>

using namespace std;

class Solution {
public:
  static vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
      auto index = abs(nums[i]) - 1;
      nums[index] = abs(nums[index]) * -1;
    }

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] > 0) {
        result.push_back(i + 1);
      }
    }

    return result;
  }
};
