#include <iostream>

#include "Easy/RemoveElement.cpp"

using namespace std;

int main() {
  vector<int> a = {3,2,2,3};
  Solution::removeElement(a, 3);
  return 0;
}
