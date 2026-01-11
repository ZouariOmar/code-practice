/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-04
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/lowest-common-ancestor-of-deepest-leaves leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

TreeNode *Solution::lcaDeepestLeaves(TreeNode *root) {
  return lcaDeepestLeavesHelper(root).first;
}

std::pair<TreeNode *, int> Solution::lcaDeepestLeavesHelper(TreeNode *node) {
  if (!node)
    return {nullptr, 0};
  auto [leftSubTree, leftDepth] = lcaDeepestLeavesHelper(node->left);
  auto [rightSubTree, rightDepth] = lcaDeepestLeavesHelper(node->right);
  if (leftDepth > rightDepth)
    return {leftSubTree, leftDepth + 1};
  else if (rightDepth > leftDepth)
    return {rightSubTree, rightDepth + 1};
  return {node, rightDepth + 1};
}