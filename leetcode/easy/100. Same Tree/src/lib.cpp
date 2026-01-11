/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-09-2024
 * @link      https://leetcode.com/problems/same-tree
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new TreeNode::TreeNode struct
 */
TreeNode::TreeNode()
    : val(0), left(nullptr), right(nullptr) {};

/**
 * @brief ### Construct a new TreeNode::TreeNode struct
 * @param x int
 */
TreeNode::TreeNode(int x)
    : val(x), left(nullptr), right(nullptr) {};

/**
 * @brief ### check if the two binary trees p and q are the same or not.
 * @param p TreeNode *
 * @param q TreeNode *
 * @return true
 * @return false
 */
bool Solution::isSameTree(TreeNode* p, TreeNode* q) {
  if (!p && !q) return true;
  if (p && !q || !p && q) return false;
  if (p->val == q->val)
    return (isSameTree(p->right, q->right) && isSameTree(p->left, q->left));
  return false;
}