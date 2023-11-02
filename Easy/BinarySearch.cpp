//
// Created by Dino Kupinic on 02.11.23.
// https://leetcode.com/problems/binary-search/
#include "vector"
#include "cmath"

using namespace std;

class Solution {
public:
  int search(vector<int> &nums, int target) {
    int low{0};
    int high = nums.size();
    do {
      int middle = (low + (high - low) / 2);
      int value = floor(nums[middle]);

      if (value == target) {
        return middle;
      } else if (value > target) {
        high = middle;
      } else {
        low = middle + 1;
      }
    } while (low < high);
    return -1;
  }
};
