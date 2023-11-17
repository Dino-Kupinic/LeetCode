#include <iostream>
#include "Easy/MergeTwoSortedLists.cpp"

int main() {
  ListNode b3(4);
  ListNode b2(2, &b3);
  ListNode b1(1, &b2);
  ListNode c3(4);
  ListNode c2(3, &c3);
  ListNode c1(1, &c2);
  Solution a;
  const ListNode* i = a.mergeTwoLists(&b1,&c1);
  while (i != nullptr) {
    cout << i->val << endl;
    if (i->next)
      i = i->next;
    else
      break;
  }
  return 0;
}
