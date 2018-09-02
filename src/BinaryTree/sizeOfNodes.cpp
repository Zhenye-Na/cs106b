/*
 * Return the number of nodes in the given tree
 */

 int size(TreeNode* node) {
   if (node == nullptr) {
     // base case
     return 0;
   } else {
     // recursive case
     return 1 + size(node->left) + size(node->right);
   }
 }
