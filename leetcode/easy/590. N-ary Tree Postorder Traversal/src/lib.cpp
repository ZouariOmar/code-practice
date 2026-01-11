/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      27-08-2024
 * @link      https://leetcode.com/problems/n-ary-tree-postorder-traversal
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

vector<int> Solution::postorder(Node *root) {
  vector<int> res;
  partition(root, res);
  return res;
}

void Solution::partition(Node *root, vector<int> &arr) {
  if (!root) return;

  for (Node *node : root->children)
    partition(node, arr);

  arr.push_back(root->val);
}