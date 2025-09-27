/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-03
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1?page=2&difficulty=Easy&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

Node::Node(int _data)
    : data(_data), left(nullptr), right(nullptr) {};

/**
 * @fn         Solution::isBalanced(Node *)
 * @brief      Determine if it is height-balanced
 * @param root {Node *}
 * @return     bool
 */
bool Solution::isBalanced(Node *root) {
  bool flag(true);
  return maxDepth(root, flag) , flag;
}

int Solution::maxDepth(Node *root, bool &flag) {
  if (!root)
    return 0;

  int leftHeight = maxDepth(root->left, flag);
  int rightHeight = maxDepth(root->right, flag);

  if (abs(rightHeight - leftHeight) > 1)
    flag = false;

  return 1 + std::max(leftHeight, rightHeight);
}