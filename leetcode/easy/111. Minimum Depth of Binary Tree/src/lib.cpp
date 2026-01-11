/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-01
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/minimum-depth-of-binary-tree leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new TreeNode::TreeNode struct
 * @param x int
 */
TreeNode::TreeNode(int x)
    : val(x), left(nullptr), right(nullptr) {};

/**
 * @brief ### Find its minimum depth
 * @param root TreeNode *
 * @return int
 */
int Solution::minDepth(TreeNode *root) {
  if (!root) return 0;

  if (!root->left)
    return 1 + minDepth(root->right);

  if (!root->right)
    return 1 + minDepth(root->left);

  return 1 + min(minDepth(root->right), minDepth(root->left));
}

/*
* Other Solution
class Solution {
public:
    int speed = []() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        return 0;
    }();
    int minDepth(TreeNode* root) {
        if (!root)
            return 0;

        int left = minDepth(root->left);
        int right = minDepth(root->right);

        if (right == 0 || left == 0)
            return max (left, right) + 1;
        root->left = nullptr;
        root->right = nullptr;
        return min(left, right) + 1;
    }
};
*/