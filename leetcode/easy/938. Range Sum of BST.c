/**
 * @file      938. Range Sum of BST.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     938. Range Sum of BST source file
 * @version   0.1
 * @date      2026-05-21
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/range-sum-of-bst leetcode @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
}; // TreeNode struct

int _isInRange(const int val, const int l, const int h) {
  return val >= l && val <= h;
}

void _preOrderedBST(struct TreeNode *root, int *r, const int l, const int h) {
  if (!root)
    return;

  if (_isInRange(root->val, l, h))
    *r += root->val;

  _preOrderedBST(root->left, r, l, h), _preOrderedBST(root->right, r, l, h);
}

int rangeSumBST(struct TreeNode *root, int low, int high) {
  int res = 0;
  return _preOrderedBST(root, &res, low, high), res;
}

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  printf("Hello World !\n");
  return EXIT_SUCCESS;
}
