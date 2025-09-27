/**
 * @file      Inorder Traversal.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Inorder Traversal source file
 * @version   0.1
 * @date      08/19/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/tree-gfg-160/problem/inorder-traversal geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>
using std::vector;

//? Function(s)/Class(es) prototype dev part

// Tree Node
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
private:
  vector<int> res;

public:
  // Function to return a list containing the inorder traversal of the tree.
  vector<int> inOrder(Node *root) {
    if (!root)
      return res;
    inOrder(root->left);
    res.push_back(root->data);
    inOrder(root->right);
    return res;
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
