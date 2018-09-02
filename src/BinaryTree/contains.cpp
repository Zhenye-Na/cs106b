/*
 * Return true if the given tree contains the given value
 * Pre-order Traversal
 */

bool contains(TreeNode* node, int value) {
  if (node != nullptr) {

    // base case
    if (value == node->data) {
      return true;
    }

    // recursive case
    if (contains(node->left, value) || contains(node->right, value)) {
      return true;
    }
  }

  return false;
}
