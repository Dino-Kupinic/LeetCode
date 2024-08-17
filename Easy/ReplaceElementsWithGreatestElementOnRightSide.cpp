//
// Created by Dino Kupinic on 17.08.24.
// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

#include <vector>

using namespace std;

class Solution {
public:
  static vector<int> replaceElements(vector<int> &arr) {
    if (arr.size() == 1) {
      vector res{-1};
      return res;
    }

    for (int i = 0; i < arr.size(); i++) {
      int greatest = 0;
      for (int j = i + 1; j < arr.size(); j++) {
        if (arr[j] > greatest) {
          greatest = arr[j];
        }
      }
      if (greatest != 0) {
        arr[i] = greatest;
      }
    }

    arr[arr.size() - 1] = -1;
    return arr;
  }
};
