//
// Created by Dino Kupinic on 31.05.24.
// https://leetcode.com/problems/fizz-buzz
#include <vector>

using namespace std;

class Solution {
public:
    static vector<string> fizzBuzz(const int n) {
        vector<string> result{};

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                result.emplace_back("FizzBuzz");
            } else if (i % 3 == 0) {
                result.emplace_back("Fizz");
            } else if (i % 5 == 0) {
                result.emplace_back("Buzz");
            } else {
                result.push_back(to_string(i));
            }
        }
        return result;
    }
};
