/**
 * @file    563. Binary Tree Tilt.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   563. Binary Tree Tilt source file
 * @version 0.1
 * @date    2025-06-03
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/binary-tree-tilt leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
struct TreeNode {
  int val;
  TreeNode *left, *right;
}; // TreeNode struct

class Solution {
private:
  int sum = 0;
  int helper(TreeNode *root) {
    if (!root)
      return 0;
    int leftSum(helper(root->left)), rightSum(helper(root->right));
    sum += std::abs(leftSum - rightSum);
    return root->val + leftSum + rightSum;
  }

public:
  int findTilt(TreeNode *root) {
    return helper(root), sum;
  }
}; // Solution class

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
