/**
 * @file      Symmetric Tree.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Symmetric Tree source file
 * @version   0.1
 * @date      21/09/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/tree-bonus-problem/problem/symmetric-tree geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part

class Node {
public:
  int data;
  Node *left, *right;

  Node(int val) {
    data = val;
    left = right = nullptr;
  }
}; // Node class

class Solution {
private:
  bool isMirror(Node *sub_left, Node *sub_right) {
    if (!sub_left && !sub_right)
      return true;
    if (!sub_right || !sub_left || sub_left->data != sub_right->data)
      return false;
    return isMirror(sub_left->right, sub_right->left) && isMirror(sub_left->left, sub_right->right);
  }

public:
  bool isSymmetric(Node *root) {
    if (!root)
      return true;
    return isMirror(root->left, root->right);
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
