//
// Created by Dino Kupinic on 24.08.24.
// https://leetcode.com/problems/height-checker/description/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
  static int heightChecker(vector<int>& heights) {
    vector<int> current = heights;
    ranges::sort(current);

    int indices = 0;

    for (int i = 0; i < heights.size(); i++) {
      if (heights[i] != current[i]) {
        indices++;
      }
    }

    return indices;
  }
};
