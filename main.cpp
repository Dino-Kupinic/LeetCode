#include <iostream>

#include "Easy/MergeSortedArray.cpp"

using namespace std;

int main() {
  vector<int> a = {1,2,3,0,0,0};
  int m = 3;
  vector<int> b = {2,5,6};
  int n = 3;
  Solution::merge(a, m, b, n);
  return 0;
}
