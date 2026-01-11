/**
 * @file    543. Diameter of Binary Tree.c
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   543. Diameter of Binary Tree source file
 * @version 0.1
 * @date    2025-05-20
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/diameter-of-binary-tree leetcode @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>

//? Struct(s) prototype dev part
struct TreeNode {
  int val;
  struct TreeNode *left, *right;
}; // TreeNode struct

//? Function(s) prototype dev part
int find(struct TreeNode *root, int *diameter) {
  if (!root)
    return 0;
  int right = find(root->right, diameter);
  int left = find(root->left, diameter);
  if (*diameter < right + left)
    *diameter = right + left;
  return 1 + ((right > left) ? right : left);
}

int diameterOfBinaryTree(struct TreeNode *root) {
  int diameter = 0;
  find(root, &diameter);
  return diameter;
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
