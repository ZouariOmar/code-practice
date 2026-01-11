/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-09-2024
 * @link      https://leetcode.com/problems/binary-tree-inorder-traversal
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new TreeNode::TreeNode struct
 */
TreeNode::TreeNode()
    : val(0), left(nullptr), right(nullptr) {};

/**
 * @brief ### Construct a new TreeNode::TreeNode struct
 * @param x int
 */
TreeNode::TreeNode(int x)
    : val(x), left(nullptr), right(nullptr) {};

/**
 * @brief ### Return the inorder traversal of its nodes' values.
 * @param root TreeNode *
 * @return vector<int>
 */
vector<int> Solution::inorderTraversal(TreeNode *root) {
  vector<int> res;
  inTrv(root, res);
  return res;
}

/**
 * @brief ### Helper function
 * @param node TreeNode *
 * @param arr vector<int> &
 */
void Solution::inTrv(TreeNode *node, vector<int> &arr) {
  if (!node) return;
  inTrv(node->left, arr);
  arr.push_back(node->val);
  inTrv(node->right, arr);
}

/*
* Other solution
class Solution {
public:
  vector<int> inorderTraversal(TreeNode* root) {
    vector<int> res;
    stack<TreeNode*> stack;

    while (root != nullptr || !stack.empty()) {
      while (root != nullptr) {
          stack.push(root);
          root = root->left;
      }

      root = stack.top();
      stack.pop();
      res.push_back(root->val);
      root = root->right;
    }

    return res;
  }
};
*/
