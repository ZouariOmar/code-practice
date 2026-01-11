/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-06
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/count-complete-tree-nodes leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Solution::Solution object
 */
Solution::Solution()
    : count(0) {};

/**
 * @brief ### Return the number of the nodes in the tree
 * @param root TreeNode *
 * @return int
 */
int Solution::countNodes(TreeNode *root) {
  if (root) {
    count++;
    countNodes(root->left);
    countNodes(root->right);
  } 
  return count;
}