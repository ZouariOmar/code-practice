/**
 * @file    559. Maximum Depth of N-ary Tree.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   559. Maximum Depth of N-ary Tree source file
 * @version 0.1
 * @date    2025-06-01
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-depth-of-n-ary-tree leetcode @endlink
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
public:
  int maxDepth(Node *root) {
    if (!root)
      return 0;
    int maxI{};
    for (Node *node : root->children)
      maxI = std::max(maxI, maxDepth(node));
    return maxI + 1;
  };
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
