//
// Created by Dino Kupinic on 31.08.24.
// https://leetcode.com/explore/learn/card/queue-stack/228/first-in-first-out-data-structure/1337/

#include <vector>

using namespace std;

class MyCircularQueue {
public:
  explicit MyCircularQueue(const int k) {
    this->data.resize(k);
    this->size = k;
    this->head = -1;
    this->tail = -1;
  }

  bool enQueue(const int value) {
    if (isFull()) {
      return false;
    }
    if (isEmpty()) {
      this->head = 0;
    }
    this->tail = (this->tail + 1) % this->size;
    this->data[this->tail] = value;
    return true;
  }

  bool deQueue() {
    if (isEmpty()) {
      return false;
    }
    if (this->head == this->tail) {
      this->head = -1;
      this->tail = -1;
      return true;
    }
    this->head = (this->head + 1) % this->size;
    return true;
  }

  [[nodiscard]] int Front() const {
    if (isEmpty()) {
      return -1;
    }
    return this->data[this->head];
  }

  [[nodiscard]] int Rear() const {
    if (isEmpty()) {
      return -1;
    }
    return this->data[this->tail];
  }

  [[nodiscard]] bool isEmpty() const {
    return this->head == -1;
  }

  [[nodiscard]] bool isFull() const {
    return (this->tail + 1) % this->size == this->head;
  }

private:
  vector<int> data;
  int head;
  int tail;
  int size;
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
