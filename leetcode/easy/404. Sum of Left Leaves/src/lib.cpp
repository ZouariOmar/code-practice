/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-15
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/sum-of-left-leaves leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new TreeNode::TreeNode object
 *
 * @struct TreeNode
 */
TreeNode::TreeNode()
    : val(0), left(nullptr), right(nullptr) {};

/**
 * @brief ### Construct a new TreeNode::TreeNode object
 *
 * @struct     TreeNode
 * @param _val int
 */
TreeNode::TreeNode(int _val)
    : val(_val), left(nullptr), right(nullptr) {};

/**
 * @brief ### Return the sum of all left leaves
 *
 * @class      Solution
 * @param root {TreeNode *}
 * @return     int
 */
int Solution::sumOfLeftLeaves(TreeNode *root) {
  int sum{};
  std::queue<std::pair<TreeNode *, bool>> q; // (node, is_left)
  q.push({root, false});

  while (!q.empty()) {
    std::pair<TreeNode *, bool> node{q.front()};
    q.pop();

    if (node.second && !node.first->left && !node.first->right)
      sum += node.first->val;

    if (node.first->left)
      q.push({node.first->left, true});

    if (node.first->right)
      q.push({node.first->right, false});
  }

  return sum;
}