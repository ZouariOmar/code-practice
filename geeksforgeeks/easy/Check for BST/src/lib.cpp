/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-07-2024
 * @link      https://www.geeksforgeeks.org/problems/check-for-bst/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Return the maximum value in the sub-tree
 *
 * @param node
 * @return int
 */
int Solution::maxValue(Node* node) {
  if (node == NULL) {
    return INT16_MIN;
  }
  int value = node->data;
  int leftMax = maxValue(node->left);
  int rightMax = maxValue(node->right);

  return max(value, max(leftMax, rightMax));
}

/**
 * @brief #### Return the minimum value in the sub-tree
 * 
 * @param node 
 * @return int 
 */
int Solution::minValue(Node* node) {
  if (node == NULL) {
    return INT16_MAX;
  }
  int value = node->data;
  int leftMax = minValue(node->left);
  int rightMax = minValue(node->right);

  return min(value, min(leftMax, rightMax));
}

/**
 * @brief #### Check if the given tree is BST
 * 
 * @param root 
 * @return true 
 * @return false 
 */
bool Solution::isBST(Node *root) {
  if (!root)
    return true;

  // False if the max of the left is > than us
  if (root->left && maxValue(root->left) >= root->data)
    return false;

  // False if the min of the right is <= than us
  if (root->right && minValue(root->right) <= root->data)
    return false;

  // False if, recursively, the left or right is not a BST
  if (!isBST(root->left) || !isBST(root->right))
    return false;

  /* passing all that, it's a BST */
  return true;

  return true;
}

/*
* Or this solution
* *
class Solution {
    // Function to check whether a Binary Tree is BST or not.
    private int MIN = 0;
    private int MAX = 100001;

    boolean isbst(Node root, int min, int max) {
        if (root == null)
            return true;
        if (root.data <= min || root.data >= max)
            return false;

        return isbst(root.left, min, root.data)
            && isbst(root.right, root.data, max);
    }

    boolean isBST(Node root) {
        // code here.
        return isbst(root, MIN, MAX);
    }
}
 */