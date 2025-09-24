/**
 * @file      k-th Smallest in BST.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     k-th Smallest in BST source file
 * @version   0.1
 * @date      09/16/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/tree-gfg-160/problem/find-k-th-smallest-element-in-bst geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
struct Node {
  int data;
  Node *left;
  Node *right;

  Node(int val) {
    data = val;
    left = right = NULL;
  }
}; // Node struct

class Solution {
private:
  static const void helper(Node *node, std::vector<int> &v) {
    if (!node)
      return;
    helper(node->left, v);
    v.push_back(node->data);
    helper(node->right, v);
  }

public:
  int kthSmallest(Node *root, int k) {
    std::vector<int> v;
    helper(root, v);
    return (v.size() < k) ? -1 : v[k];
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
