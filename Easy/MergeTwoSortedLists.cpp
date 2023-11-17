//
// Created by Dino on 15.11.2023.
// https://leetcode.com/problems/merge-two-sorted-lists/

#include "memory"

using namespace std;

struct ListNode {
  int val;
  ListNode* next;

  ListNode() : val(0), next(nullptr) {
  }

  explicit ListNode(int x) : val(x), next(nullptr) {
  }

  ListNode(int x, ListNode* next) : val(x), next(next) {
  }
};

class Solution {
public:
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    const unique_ptr<ListNode> mergedList(new ListNode());
    ListNode* current = mergedList.get();

    while (list1 != nullptr && list2 != nullptr) {
      if (list1->val < list2->val) {
        current->next = list1;
        list1 = list1->next;
      }
      else {
        current->next = list2;
        list2 = list2->next;
      }
      current = current->next;
    }

    if (list1 != nullptr)
      current->next = list1;
    else
      current->next = list2;

    return mergedList->next;
  }
};
