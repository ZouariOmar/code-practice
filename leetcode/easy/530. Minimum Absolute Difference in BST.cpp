/**
 * @file    530. Minimum Absolute Difference in BST.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   530. Minimum Absolute Difference in BST source file
 * @version 0.1
 * @date    2025-06-05
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/minimum-absolute-difference-in-bst leetcode @endlink
 */

//? Include prototype declaration part
#include <climits>
#include <iostream>

//? Function(s)/Class(es) prototype dev part
struct TreeNode {
  int val;
  TreeNode *left, *right;
}; // TreeNode struct

class Solution {
private:
  int result = INT_MAX, prev{-1};

public:
  int getMinimumDifference(TreeNode *root) {
    if (!root)
      return result;
    getMinimumDifference(root->left);
    if (prev != -1)
      result = std::min(result, std::abs(root->val - prev));
    prev = root->val;
    getMinimumDifference(root->right);
    return result;
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
