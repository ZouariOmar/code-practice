/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-09-2024
 * @link      https://leetcode.com/problems/same-tree
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
  TreeNode *p = new TreeNode(1);
  p->left = new TreeNode(2);
  p->right = new TreeNode(3);
  TreeNode *q = new TreeNode(1);
  q->left = new TreeNode(2);
  q->right = new TreeNode(5);

  cout << boolalpha << sl.isSameTree(p, q) << endl;

  return 0;
}