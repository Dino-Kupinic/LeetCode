#include <iostream>
#include "Easy/MiddleOfTheLinkedList.cpp"

using namespace std;

int main() {
  for (const auto result = Solution::middleNode(); const auto& i : result) {
    std::cout << i;
  }
  return 0;
}
