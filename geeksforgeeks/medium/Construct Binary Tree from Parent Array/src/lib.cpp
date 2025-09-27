/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://www.geeksforgeeks.org/problems/construct-binary-tree-from-parent-array/1
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Construct binary tree from parent array
 *
 * @param parent
 * @return Node*
 */
Node *Solution::createTree(vector<int> parent) {
  Node *root = nullptr;
  vector<Node *> nodes(parent.size(), nullptr);

  for (int i = 0; i < parent.size(); i++) {
    if (nodes[i] == nullptr) {
      nodes[i] = new Node(i);
    }
    if (parent[i] == -1) {
      root = nodes[i];
    } else {
      if (nodes[parent[i]] == nullptr) {
        nodes[parent[i]] = new Node(parent[i]);
      }
      if (nodes[parent[i]]->left == nullptr) {
        nodes[parent[i]]->left = nodes[i];
      } else {
        nodes[parent[i]]->right = nodes[i];
      }
    }
  }

  return root;
}

/**
 * @brief Display the BT using thr pre-ordered traversal method
 *
 * @param root
 */
void Solution::displayBT(Node *root) {
  if (root) {
    cout << root->data << " ";
    displayBT(root->left);
    displayBT(root->right);
  }
}