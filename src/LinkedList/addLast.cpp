void addLast(ListNode*& front, int value) {
  if (front == nullptr) {
    // empty list
    front = new ListNode(value);
  } else {
    ListNode* current = front;
    // find the last ListNode
    while (current->next != nullptr) {
      current = current->next;
    }
    // current points to the last ListNode

    ListNode* newNode = new ListNode(value);
    newNode->next = nullptr;
    current->next = newNode;
  }
}
