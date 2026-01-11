/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      26-09-2024
 * @link      https://leetcode.com/problems/symmetric-tree
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new TreeNode::TreeNode struct
 */
TreeNode::TreeNode(int x)
    : val(x), left(nullptr), right(nullptr) {}

/**
 * @brief ### check whether it is a mirror of itself (main)
 * @param root TreeNode *
 * @return true or false
 */
bool Solution::isSymmetric(TreeNode *root) {
  return isMirror(root->left, root->right);
}

/**
 * @brief check whether it is a mirror of itself (helper)
 * @param n1 TreeNode *
 * @param n2 TreeNode *
 * @return true or false
 */
bool Solution::isMirror(TreeNode* n1, TreeNode* n2) {
  if (!n1 && !n2) return true;
  if (!n1 || !n2) return false;
  return n1->val == n2->val && isMirror(n1->left, n2->right) && isMirror(n1->right, n2->left);
}

/*
* Other solution
class Solution {
public:
  bool checksymm(TreeNode* left,TreeNode* right){
      if(left==NULL or right==NULL) return left==right;
      return (left->val==right->val) and checksymm(left->left,right->right) and checksymm(left->right,right->left);
  }
  bool isSymmetric(TreeNode* root) {
      return (root==NULL) or checksymm(root->left,root->right);
  }
};
*/