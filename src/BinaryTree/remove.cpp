/*
 * Returns the maximum value in this BST
 * Assumes tree is valid BST order and non-empty
 * If tree is empty , returns 0
 * O(log n)
 */


void remove(TreeNode*& node, int value) {
  if (node->data < value) {
    remove(node->right, value);
  } else if (node->data > value) {
    remove(node->left, value);
  } else {
    if (node->isLeaf()) {

      // case 1: leaf
      delete node;
      node = nullptr;
    } else if (node->right == nullptr) {

      // case 2: only left subtree
      TreeNode* Trash = node;
      node = node->left;
      delete node;
    } else if (node->left == nullptr) {

      // case 3: only right subtree
      TreeNode* Trash = node;
      node = node->right;
      delete node;
    } else {

      // case 4: full tree -> find the smallest element, swap with root
      int minValue = getMin(node);
      node->data = minValue;
      remove(node->right, minValue);
    }

  }
}
