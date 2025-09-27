/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      08-08-2024
 * @link      https://www.geeksforgeeks.org/problems/sum-tree/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief Construct a new Node::Node object
 * @param x
 */
Node::Node(int x)
    : data(x), left(nullptr), right(nullptr) {};

/**
 * @brief #### Check if the tree is a Sum Tree
 * @param root - Pointer to the root of the tree
 * @return true - If the tree is a Sum Tree
 * @return false - Otherwise
 */
bool Solution::isSumTree(Node* root) {
  if (!root || (!root->left && !root->right))
    return true;  // Base case: empty tree or leaf node

  int leftSum = sumTree(root->left);
  int rightSum = sumTree(root->right);

  if (root->data == leftSum + rightSum &&
      isSumTree(root->left) &&
      isSumTree(root->right)) {
    return true;
  }
  return false;
}

/**
 * @brief #### Calculate the sum of all nodes in a subtree
 * @param root - Pointer to the root of the subtree
 * @return int - The sum of the values of all nodes in the subtree
 */
int Solution::sumTree(Node* root) {
  if (!root)
    return 0;  // Base case: empty subtree

  return root->data + sumTree(root->left) + sumTree(root->right);
}