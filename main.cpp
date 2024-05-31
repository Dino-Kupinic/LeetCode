#include <iostream>
#include "Easy/FizzBuzz.cpp"

using namespace std;

int main() {
  for (const auto result = Solution::fizzBuzz(3); const auto& i : result) {
    std::cout << i;
  }
  return 0;
}
