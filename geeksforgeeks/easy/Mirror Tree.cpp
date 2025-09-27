/**
 * @file      Mirror Tree.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     filename source file
 * @version   0.1
 * @date      07/29/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/tree-gfg-160/problem/mirror-tree geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <utility>

//? Function(s)/Class(es) prototype dev part

class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int x) {
    data = x;
    left = right = NULL;
  }
}; // Node class

class Solution {
public:
  // Function to convert a binary tree into its mirror tree.
  void mirror(Node *node) {
    if (!node || (!node->left && !node->right))
      return;
    std::swap(node->left, node->right);
    mirror(node->left);
    mirror(node->right);
  }
};

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
