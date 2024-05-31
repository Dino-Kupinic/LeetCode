//
// Created by Dino on 18.11.2023.
// https://leetcode.com/problems/flood-fill/

#include <vector>

using namespace std;

class Solution {
public:
  bool isValidIndex(const int row, const int col, const int numRows, const int numCols) {
    return row >= 0 && row < numRows && col >= 0 && col < numCols;
  }

  void floodFillUtil(vector<vector<int>>&image, int sr, int sc, int color, int originalColor) {
    if (!isValidIndex(sr, sc, image.size(), image[0].size())
        || image[sr][sc] != originalColor
        || image[sr][sc] == color
    ) {
      return;
    }

    image[sr][sc] = color;

    floodFillUtil(image, sr, sc - 1, color, originalColor);
    floodFillUtil(image, sr, sc + 1, color, originalColor);
    floodFillUtil(image, sr - 1, sc, color, originalColor);
    floodFillUtil(image, sr + 1, sc, color, originalColor);
  }

  vector<vector<int>> floodFill(vector<vector<int>>&image, int sr, int sc, int color) {
    int originalColor = image[sr][sc];
    if (originalColor != color) {
      floodFillUtil(image, sr, sc, color, originalColor);
    }
    return image;
  }
};
