/*
 * Print all nodes of the tree with the given node as its root
 */

void print(TreeNode* node) {
  // recursive case
  if (node != nullptr) {
    cout << node->data << endl;
    print(node->left);
    print(node->right);
  }
}
