/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/delete-nodes-and-return-forest
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(3);
  root->right->left = new TreeNode(6);
  root->right->right = new TreeNode(7);
  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);
  vector<int> arr = {3, 5};
  Solution sl;

  vector<TreeNode*> res = sl.delNodes(root, arr);

  for (auto it : res)
    cout << it->val << " ";


  return 0;
}
