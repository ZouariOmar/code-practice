/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-06
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/root-to-leaf-paths-sum/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the sum of all the numbers that are formed from root to leaf paths.
 * @details The formation of the numbers would be like `10 * parent + current`
 * @param root Node *
 * @return int
 */
int Solution::treePathsSum(Node *root) {
  return treePathsSumHelper(root, 0);
}

/**
 * @brief ### Find the sum of all the numbers that are formed from root to leaf paths.
 * @details The formation of the numbers would be like `10 * parent + current`
 * @param root Node *
 * @return int
 */
int Solution::treePathsSumHelper(Node* root, int currentSum) {
  if (!root) return 0;

  // Update the current path sum.
  currentSum = currentSum * 10 + root->data;

  // If we reached a leaf node, return the current path sum.
  if (!root->left && !root->right)
    return currentSum;

  // Recur for left and right children and return the total sum.
  return treePathsSumHelper(root->left, currentSum) + treePathsSumHelper(root->right, currentSum);
}