//
// Created by Dino Kupinic on 18.06.24.
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include <vector>

using namespace std;

class Solution {
public:
  static int removeDuplicates(vector<int> &nums) {
    int j = 1;
    for (int i = 1; i < nums.size(); i++) {
      if (const int prev = nums[i - 1]; nums[i] != prev) {
        nums[j] = nums[i];
        j++;
      }
    }
    return j;
  }
};
