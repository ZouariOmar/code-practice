/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Removes the nodes that have only one child
 *
 * @param root
 * @return Solution::Node*
 */
Solution::Node* Solution::RemoveHalfNodes(Node* root) {
  if (root == nullptr) {
    return nullptr;
  }

  // Recursively fix the left and right subtrees
  root->left = RemoveHalfNodes(root->left);
  root->right = RemoveHalfNodes(root->right);

  // If this node is a half node with only right child
  if (root->left == nullptr && root->right != nullptr) {
    Node* new_root = root->right;
    delete root;
    return new_root;
  }

  // If this node is a half node with only left child
  if (root->left != nullptr && root->right == nullptr) {
    Node* new_root = root->left;
    delete root;
    return new_root;
  }

  // If this node has either no children or two children, return this node
  return root;
}

/**
 * @brief Print the Binary Tree
 *
 * @param root
 */
void Solution::printBT(Node *root) {
  if (root) {
    cout << root->data << " ";
    printBT(root->left);
    printBT(root->right);
  }
}