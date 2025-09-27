/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-07
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/level-order-traversal/1?page=3&difficulty=Easy&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

std::vector<std::vector<int>> Solution::levelOrder(Node *root) {
  std::queue<Node *> q;
  std::vector<std::vector<int>> res;
  q.push(root);

  while (!q.empty()) {
    int size = q.size();
    std::vector<int> lvl;
    for (int i{}; i < size; i++) {
      Node *node = q.front();
      q.pop(), lvl.push_back(node->data);
      if (node->left)
        q.push(node->left);
      if (node->right)
        q.push(node->right);
    }
    res.push_back(lvl);
  }

  return res;
}