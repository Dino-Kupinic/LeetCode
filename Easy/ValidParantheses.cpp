//
// Created by Dino Kupinic on 01.11.23.
// https://leetcode.com/problems/valid-parentheses/
#include "stack"
#include "string"

using namespace std;

class Solution {
public:
  static bool isValid(const string_view s) {
    stack<char> stack;

    for (const char character: s) {
      switch (character) {
        case '(' :
          stack.push(')');
          break;
        case '{' :
          stack.push('}');
          break;
        case '[' :
          stack.push(']');
          break;
        default: {
          if (stack.empty() || stack.top() != character) {
            return false;
          }
          stack.pop();
        }
      }
    }
    return stack.empty();
  }
};
