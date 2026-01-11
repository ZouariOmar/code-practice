/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-15
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/binary-tree-paths leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

vector<string> Solution::binaryTreePaths(TreeNode *root) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<string> vec;
  dfs(root, vec, "");
  return vec;
}

void Solution::dfs(TreeNode* root, vector<string>& vec, string str) {
  if (!root)
    return;
  str = str + to_string(root->val) + "->";
  if (!root->left and !root->right) {
    str.pop_back();
    str.pop_back();
    vec.push_back(str);
    str.pop_back();
  }
  dfs(root->left, vec, str);
  dfs(root->right, vec, str);
  return;
}