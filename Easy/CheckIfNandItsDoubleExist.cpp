//
// Created by Dino Kupinic on 13.08.24.
// https://leetcode.com/problems/check-if-n-and-its-double-exist/

#include <vector>

using namespace std;

class Solution {
public:
  static bool checkIfExist(const std::vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
      for (int j = 0; j < arr.size(); j++) {
        if (i != j && arr[i] == 2 * arr[j]) {
          return true;
        }
      }
    }
    return false;
  }
};
