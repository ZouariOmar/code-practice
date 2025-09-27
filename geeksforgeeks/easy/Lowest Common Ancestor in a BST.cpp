/**
 * @file      Lowest Common Ancestor in a BST.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Lowest Common Ancestor in a BST source file
 * @version   0.1
 * @date      09/13/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/tree-gfg-160/problem/lowest-common-ancestor-in-a-bst geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Node {
public:
  int data;
  Node *left;
  Node *right;

  // Constructor to initialize a new node
  Node(int val) {
    data = val;
    left = NULL;
    right = NULL;
  }
}; // Node class

class Solution {
public:
  Node *LCA(Node *root, Node *n1, Node *n2) {
    while (root) {
      if (root->data < n1->data && root->data < n2->data)
        root = root->right;
      else if (root->data > n1->data && root->data > n2->data)
        root = root->left;
      else
        break;
    }
    return root;
  }
}; // Solution class

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
