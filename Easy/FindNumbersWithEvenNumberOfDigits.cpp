//
// Created by Dino Kupinic on 09.06.24.
// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/

#include <vector>

class Solution {
public:
  static int findNumbers(std::vector<int>& nums) {
    int even_digits = 0;
    for (int num : nums) {
      int count = 0;
      while (num != 0) {
        num /= 10;
        count++;
      }
      if (count % 2 == 0) {
        even_digits++;
      }
    }
    return even_digits;
  }
};

