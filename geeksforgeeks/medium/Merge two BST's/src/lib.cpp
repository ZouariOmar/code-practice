/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      23-07-2024
 * @link      https://www.geeksforgeeks.org/problems/merge-two-bst-s/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Given two BSTs, return elements of merged BSTs in sorted form.
 *
 * @param root1
 * @param root2
 * @return vector<int>
 */
vector<int> Solution::merge(Node *root1, Node *root2) {
  vector<int> res;
  BST_to_vector(root1, res);
  BST_to_vector(root2, res);

  // Sort the vector in ascending-order
  sort(res.begin(), res.end());

  return res;
}

/**
 * @brief #### Hold the vector with the BST data
 *
 * @param root
 * @param arr
 */
void Solution::BST_to_vector(Node *root, vector<int> &arr) {
  if (root) {
    arr.push_back(root->data);
    BST_to_vector(root->left, arr);
    BST_to_vector(root->right, arr);
  }
}