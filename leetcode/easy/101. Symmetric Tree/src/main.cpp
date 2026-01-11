/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      26-09-2024
 * @link      https://leetcode.com/problems/symmetric-tree
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief # The Main Program Function
 * @return int 
 */
int main() {
  //* principal vars declaration part
  Solution sl;
  TreeNode *root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->left->right = new TreeNode(3);
  root->right = new TreeNode(2);
  root->right->right = new TreeNode(3);

  cout << boolalpha << sl.isSymmetric(root) << endl;

  return 0;
}