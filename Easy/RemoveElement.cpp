//
// Created by Dino Kupinic on 15.06.24.
// https://leetcode.com/problems/remove-element

#include <vector>

using namespace std;

class Solution {
public:
  static int removeElement(vector<int>& nums, const int val) {
    int index = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != val) {
        nums[index] = nums[i];
        index++;
      }
    }
    return index;
  }
};
