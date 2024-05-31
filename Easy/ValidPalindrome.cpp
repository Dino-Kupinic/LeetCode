//
// Created by Dino Kupinic on 03.11.23.
// https://leetcode.com/problems/valid-palindrome/
#include "string"
#include "algorithm"

using namespace std;

class Solution {
public:
  static void prepare(string &s) {
    erase_if(s, [](char c) {
      return !isalnum(c) || isspace(c);
    });
    ranges::transform(s, s.begin(), [](char c) {
      return tolower(c);
    });
  }

  static bool isPalindrome(string s) {
    string str{s};

    prepare(s);
    prepare(str);

    ranges::reverse(s);

    return s == str;
  }
};
