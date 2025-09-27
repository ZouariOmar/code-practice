/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-02
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/height-of-binary-tree/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Node::Node object
 *
 * @param x int
 */
Node::Node(int x)
    : data(x), left(nullptr), right(nullptr) {};

/**
 * @brief ### Given a binary tree, find its height
 *
 * @param root {Node *}
 * @return int
 */
int Solution::height(Node *root) {
  int hight{};
  return helper(root, hight);
}

/**
 * @brief ### Help the `Solution::height()` fn
 *
 * @param root {Node *}
 * @param h {int &}
 * @return int
 */
int Solution::helper(Node *root, int h) {
  if (!root)
    return h - 1;
  return max(helper(root->left, h + 1), helper(root->right, h + 1));
}