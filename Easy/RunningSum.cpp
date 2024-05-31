//
// Created by Dino Kupinic on 02.11.23.
// https://leetcode.com/problems/running-sum-of-1d-array/
#include "vector"

using namespace std;

class Solution {
public:
  static vector<int> runningSum(const vector<int> &nums) {
    vector<int> solution;
    solution.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++) {
      solution.push_back(nums[i] + solution[i - 1]);
    }
    return solution;
  }
};
