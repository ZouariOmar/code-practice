/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-07-2024
 * @link      https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.
 * @param nums
 * @return TreeNode*
 */
TreeNode* Solution::sortedArrayToBST(vector<int>& nums) {
  return constructBST(nums, 0, nums.size() - 1);
}

/**
 * @brief #### Convert sorted vector to BST
 * @param nums
 * @param l
 * @param h
 * @return TreeNode*
 */
TreeNode* Solution::constructBST(vector<int> nums, int left, int right) {
  if (left > right) {
    return NULL;
  }
  int mid = (left + right) / 2;
  TreeNode* node = new TreeNode(nums[mid]);
  node->left = constructBST(nums, left, mid - 1);
  node->right = constructBST(nums, mid + 1, right);

  return node;
}

/**
 * @brief Print the BT in pre-ordered view
 * 
 * @param root 
 */
void Solution::print_BT(TreeNode *root) {
  if (root) {
    cout << root->val << " ";
    print_BT(root->left);
    print_BT(root->right);
  }
}