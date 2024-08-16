//
// Created by Dino Kupinic on 16.08.24.
// https://leetcode.com/problems/valid-mountain-array/description/

#include <vector>

using namespace std;

class Solution {
public:
  static bool validMountainArray(vector<int> &arr) {
    if (arr.size() < 3) return false;

    int peak = 0;

    for (int i = 1; i < arr.size(); i++) {
      if (arr[i] > arr[i - 1]) {
        peak = i;
      } else {
        break;
      }
    }

    if (peak == 0 || peak == arr.size() - 1) {
      return false;
    }

    for (int i = peak + 1; i < arr.size(); i++) {
      if (arr[i] >= arr[i - 1]) {
        return false;
      }
    }

    return true;
  }
};
