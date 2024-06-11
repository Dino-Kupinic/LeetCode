#include <iostream>

#include "Easy/DuplicateZeros.cpp"

using namespace std;

int main() {
  std::vector v = {1,0,2,3,0,4,5,0};
  Solution::duplicateZeros(v);
  return 0;
}
