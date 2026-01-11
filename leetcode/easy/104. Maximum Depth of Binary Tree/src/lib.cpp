/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      27-09-2024
 * @link      https://leetcode.com/problems/maximum-depth-of-binary-tree
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Return its maximum depth
 * @param root TreeNode *
 * @return int
 */
int Solution::maxDepth(TreeNode* root) {
  if (!root) return 0;
  return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}