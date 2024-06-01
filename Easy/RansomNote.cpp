//
// Created by Dino Kupinic on 01.06.24.
// https://leetcode.com/problems/ransom-note

#include <string>
#include <map>
#include <iostream>

using namespace std;

class Solution {
public:
  static bool canConstruct(const string &ransomNote, const string &magazine) {
    map<char, int> magazineMap{};

    for (int i = 0; i < magazine.length(); i++) {
      char c = magazine.at(i);

      int count = 0;
      if (magazineMap.find(c)->first) {
        count = magazineMap.find(c)->second;
      }

      magazineMap[c] = count + 1;
    }

    for (int j = 0; j < ransomNote.length(); j++) {
      char c = ransomNote.at(j);

      int count = 0;
      if (magazineMap.find(c)->first) {
        count = magazineMap.find(c)->second;
      }

      if (count == 0) {
        return false;
      }

      magazineMap[c] = count - 1;
    }

    return true;
  }
};
