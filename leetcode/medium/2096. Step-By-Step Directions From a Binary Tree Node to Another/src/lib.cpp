/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/step-by-step-directions-from-a-binary-tree-node-to-another
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief You are given the root of a binary tree with n nodes.
 * Each node is uniquely assigned a value from 1 to n.
 * You are also given an integer startValue representing the value of the start node s,
 * and a different integer destValue representing the value of the destination node t.
 *
 * @param root
 * @param startValue
 * @param destValue
 * @return string
 */
string Solution::getDirections(TreeNode* root, int startValue, int destValue) {
  string s_p, d_p;
  findNode(root, startValue, s_p);
  findNode(root, destValue, d_p);
  while (!s_p.empty() && !d_p.empty() && s_p.back() == d_p.back()) {
    s_p.pop_back();
    d_p.pop_back();
  }
  return string(s_p.size(), 'U') + string(rbegin(d_p), rend(d_p));
}

/**
 * @brief
 *
 * @param n
 * @param val
 * @param path
 * @return true
 * @return false
 */
bool Solution::findNode(TreeNode* n, int val, string& path) {
  if (n->val == val)
    return true;
  if (n->left && findNode(n->left, val, path))
    path.push_back('L');
  else if (n->right && findNode(n->right, val, path))
    path.push_back('R');
  return !path.empty();
}

/**
 * @brief preorder traversal binary tree display mode
 *
 * @param root
 */
void Solution::displayBT(TreeNode* root) {
  if (root != nullptr) {
    cout << root->val << " ";
    displayBT(root->left);
    displayBT(root->right);
  }
}