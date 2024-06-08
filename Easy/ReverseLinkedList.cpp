//
// Created by Dino Kupinic on 08.06.24.
// https://leetcode.com/problems/reverse-linked-list/

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
  static ListNode *reverseList(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
      return head;
    }
    ListNode* new_head = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return new_head;
  }
};
