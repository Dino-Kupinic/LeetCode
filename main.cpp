#include <iostream>

#include "Easy/MaxConsecutiveOnes.cpp"

using namespace std;

int main() {
  cout << Solution::findMaxConsecutiveOnes({1,0,1,1,0,1}) << endl;
  cout << Solution::findMaxConsecutiveOnes({1,1,0,1,1,1}) << endl;
  return 0;
}
