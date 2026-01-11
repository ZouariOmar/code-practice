/**
 * @file    589. N-ary Tree Preorder Traversal.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   589. N-ary Tree Preorder Traversal source file
 * @version 0.1
 * @date    2025-06-09
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/n-ary-tree-preorder-traversal leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Node {
public:
  int val;
  std::vector<Node *> children;

  Node() {}

  Node(int _val) {
    val = _val;
  }

  Node(int _val, std::vector<Node *> _children) {
    val = _val;
    children = _children;
  }
}; // Node class

class Solution {
private:
  std::vector<int> result;

  void adder(Node *root) {
    if (!root)
      return;
    result.push_back(root->val);
    for (auto c : root->children)
      adder(c);
  }

public:
  std::vector<int> preorder(Node *root) {
    adder(root);
    return result;
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
