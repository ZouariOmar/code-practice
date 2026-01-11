/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/delete-nodes-and-return-forest
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

vector<TreeNode*> Solution::delNodes(TreeNode* root, vector<int>& to_delete) {
  unordered_set<int> toDelete(to_delete.begin(), to_delete.end());
  vector<TreeNode*> result;
  helper(root, toDelete, result, true);
  return result;
}

/**
 * @brief 
 * 
 * @param node 
 * @param toDelete 
 * @param result 
 * @param isRoot 
 * @return TreeNode* 
 */
TreeNode* Solution::helper(TreeNode* node, unordered_set<int>& toDelete, vector<TreeNode*>& result, bool isRoot) {
  if (!node) return nullptr;

  bool deleted = toDelete.count(node->val);

  if (isRoot && !deleted) {
    result.push_back(node);
  }

  node->left = helper(node->left, toDelete, result, deleted);
  node->right = helper(node->right, toDelete, result, deleted);

  return deleted ? nullptr : node;
}

