//
// Created by Dino Kupinic on 02.11.23.
// https://leetcode.com/problems/valid-anagram/
#include "string"
#include "algorithm"

using namespace std;

class Solution {
public:
  static bool isAnagram(string s, string t) {
    ranges::sort(s);
    ranges::sort(t);
    if (s == t)
      return true;
    return false;
  }
};
