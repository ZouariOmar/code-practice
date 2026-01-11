/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-22
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/recover-a-tree-from-preorder-traversal leetcode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Structure prototype declaration part
struct TreeNode {
  int val;
  TreeNode *left, *right;
  TreeNode(int);
}; // TreeNode struct

//? Class prototype declaration part
class Solution {
  private:
    string s;
    int idx = 0, level = 0;
    void helper(TreeNode *, int);

  public:
    TreeNode *recoverFromPreorder(string);
}; // Solution class

#endif // __INC_HPP__