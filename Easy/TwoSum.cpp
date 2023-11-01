//
// Created by Dino Kupinic on 01.11.23.
// https://leetcode.com/problems/two-sum
#include "vector"

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> result{};
    for (int i = 0; i < nums.size() - 1; i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target) {
          result.push_back(i);
          result.push_back(j);
          return result;
        }
      }
    }
    return result;
  }
};