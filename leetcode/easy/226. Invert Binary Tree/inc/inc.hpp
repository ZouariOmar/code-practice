/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-09
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/invert-binary-tree leecode @endlink
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
};  // TreeNode struct

//? Class prototype declaration part
class Solution {
 public:
  TreeNode* invertTree(TreeNode *);
};  // Solution class

#endif  // __INC_HPP__