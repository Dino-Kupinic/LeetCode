//
// Created by Dino Kupinic on 03.11.23.
// https://leetcode.com/problems/valid-palindrome/
#include "string"
#include "algorithm"

using namespace std;

class Solution {
public:
  static void prepare(string &s) {
    s.erase(remove_if(s.begin(), s.end(), [](char c) {
      return !isalnum(c) || isspace(c);
    }), s.end());
    transform(s.begin(), s.end(), s.begin(), [](char c) {
      return tolower(c);
    });
  }

  bool isPalindrome(string s) {
    string str{s};

    prepare(s);
    prepare(str);

    reverse(s.begin(), s.end());

    return s == str;
  }
};