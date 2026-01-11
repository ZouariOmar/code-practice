/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-03
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/path-sum leecode @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int 
 */
int main() {
  TreeNode *root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(3);
  Solution sl;

  cout << boolalpha << sl.hasPathSum(root , 3) << endl;

  return 0;
}