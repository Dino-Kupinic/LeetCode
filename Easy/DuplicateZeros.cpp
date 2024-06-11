//
// Created by Dino Kupinic on 10.06.24.
// https://leetcode.com/problems/duplicate-zeros/description/

#include <vector>

class Solution {
public:
  static void duplicateZeros(std::vector<int>& arr) {
    int zeros = 0;

    for (const int i : arr) {
      if (i == 0) {
        ++zeros;
      }
    }

    int i = arr.size() - 1;
    int j = arr.size() + zeros - 1;

    while (i < j) {
      if (j < arr.size()) {
        arr[j] = arr[i];
      }
      if (arr[i] == 0) {
        --j;
        if (j < arr.size()) {
          arr[j] = 0;
        }
      }
      --i;
      --j;
    }
  }
};
