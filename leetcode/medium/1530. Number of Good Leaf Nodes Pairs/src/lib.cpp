/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/number-of-good-leaf-nodes-pairs
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief ### Depth First Search
 * 
 * @param root 
 * @param count 
 * @param distance 
 * @return vector<int> 
 */
vector<int> Solution::dfs(TreeNode* root, int& count, int distance) {
  if (!root) return {};

  if (!root->left && !root->right) return {1};  // Leaf node

  vector<int> leftDist = dfs(root->left, count, distance);
  vector<int> rightDist = dfs(root->right, count, distance);

  // Count pairs of leaves from left and right subtrees
  for (int l : leftDist) {
    for (int r : rightDist) {
      if (l + r <= distance) {
        count++;
      }
    }
  }

  // Collect distances for the current node, incrementing by 1
  vector<int> result;
  for (int l : leftDist)
    if (l + 1 < distance) result.push_back(l + 1);

  for (int r : rightDist)
    if (r + 1 < distance) result.push_back(r + 1);

  return result;
}

/**
 * @brief ### Return the number of good leaf node pairs in the tree
 *
 * @param root
 * @param distance
 * @return int
 */
int Solution::countPairs(TreeNode* root, int distance) {
  int count = 0;
  dfs(root, count, distance);
  return count;
}