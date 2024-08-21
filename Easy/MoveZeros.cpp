//
// Created by Dino Kupinic on 21.08.24.
// https://leetcode.com/problems/move-zeroes/description/

#include <vector>

using namespace std;

class Solution {
public:
  // Version 1

  // static void moveZeroes(std::vector<int> &nums) {
  //   if (nums.size() < 2) return;
  //
  //   int zeroCount = 0;
  //   vector<int> numbers{};
  //
  //   for (int i = 0; i < nums.size(); i++) {
  //     if (nums[i] == 0) {
  //       zeroCount++;
  //     } else {
  //       numbers.push_back(nums[i]);
  //     }
  //   }
  //
  //   for (int i = 0; i < zeroCount; i++) {
  //     numbers.push_back(0);
  //   }
  //
  //   nums = numbers;
  // }

  // Version 2

  static void moveZeroes(std::vector<int> &nums) {
    int ptr2 = 0;

    for (int ptr1 = 0; ptr1 < nums.size(); ptr1++) {
      if (nums[ptr1] != 0) {
        swap(nums[ptr2], nums[ptr1]);
        ptr2++;
      }
    }
  }
};
