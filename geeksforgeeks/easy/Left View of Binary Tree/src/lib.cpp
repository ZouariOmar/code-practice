/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      02-08-2024
 * @link      https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1?page=1&sortBy=submissions
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Return the left view of a binary tree
 * 
 * @param root 
 * @return vector<int> 
 */
vector<int> leftView(Node* root) {
  vector<int> res;
  if (!root) return res;

  queue<Node*> q;
  q.push(root);

  while (!q.empty()) {
    int n = q.size();

    for (int i = 0; i < n; ++i) {
      Node* node = q.front();
      q.pop();

      // If this is the first node of this level
      if (i == 0) {
        res.push_back(node->data);
      }

      // Add left node to queue
      if (node->left) {
        q.push(node->left);
      }

      // Add right node to queue
      if (node->right) {
        q.push(node->right);
      }
    }
  }

  return res;
}