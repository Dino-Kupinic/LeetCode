//
// Created by Dino Kupinic on 01.06.24.
// https://leetcode.com/problems/middle-of-the-linked-list/

#include <vector>

struct ListNode {
  int val;
  ListNode *next;

  ListNode() : val(0), next(nullptr) {
  }

  explicit ListNode(const int x) : val(x), next(nullptr) {
  }

  ListNode(const int x, ListNode *next) : val(x), next(next) {
  }
};

class Solution {
public:
  static ListNode *middleNode(ListNode *head) {
    std::vector<ListNode *> nodes;

    ListNode *slowPointer = head;
    ListNode *fastPointer = head;

    while (fastPointer != nullptr && fastPointer->next != nullptr) {
      slowPointer = slowPointer->next;
      fastPointer = fastPointer->next->next;
    }

    return slowPointer;
  }
};
