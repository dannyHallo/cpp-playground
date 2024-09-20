#include <iostream>

struct Node {
  int val;
  Node *next;
  Node(int val) : val(val), next(nullptr) {}

  Node *append(int val) {
    Node *newNode = new Node(val);
    this->next    = newNode;
    return newNode;
  }

  void print() {
    Node *current = this;
    while (current != nullptr) {
      std::cout << current->val << ' ';
      current = current->next;
    }
    std::cout << '\n';
  }
};

void removeDups(Node *head) {
  Node *current = head;
  while (current != nullptr) {
    while (current->next != nullptr && current->val == current->next->val) {
      current->next = current->next->next;
    }
    current = current->next;
  }
}

int main() {
  std::cout << "The program starts! \n" << '\n';

  Node *head = new Node(1);

  // create a more complex linked list
  head->append(2)
      ->append(2)
      ->append(3)
      ->append(3)
      ->append(4)
      ->append(5)
      ->append(1)
      ->append(1)
      ->append(9);

  removeDups(head);

  head->print();

  return 0;
}
