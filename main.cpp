#include <iostream>

#include "Easy/FindAllNumbersDisappearedInAnArray.cpp"

using namespace std;

int main() {
  vector<int> a = {4,3,2,7,8,2,3,1};

  auto res = Solution::findDisappearedNumbers(a);
  for (auto i : res) {
    cout << i << " ";
  }
  return 0;
}
