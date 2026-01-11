/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-03
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/path-sum leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new TreeNode::TreeNode object
 * @param x int
 */
TreeNode::TreeNode(int x)
    : val(x), left(nullptr), right(nullptr) {};

/**
 * @brief ### Return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.
 * @param root TreeNode *
 * @param targetSum targetSum
 * @return true or false
 */
bool Solution::hasPathSum(TreeNode* root, int targetSum) {
  if (!root) return false;
  return helper(root, 0, targetSum);
}

/**
 * @brief ### Help the `hasPathSum` function
 * @param root TreeNode *
 * @param currentSum int
 * @param targetSum int
 * @return true or false
 */
bool Solution::helper(TreeNode* root, int currentSum, int targetSum) {
  if (!root) return false;
  currentSum += root->val;
  if (!root->left && !root->right) return currentSum == targetSum;
  return (helper(root->left, currentSum, targetSum) || helper(root->right, currentSum, targetSum));
}