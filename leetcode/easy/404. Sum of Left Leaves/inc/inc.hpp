/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-15
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/sum-of-left-leaves leetcode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <queue>

//? Structure prototype declaration part
struct TreeNode {
  int val;
  TreeNode *left, *right;
  TreeNode();
  TreeNode(int);
}; // TreeNode struct

//? Class prototype declaration part
class Solution {
public:
  int sumOfLeftLeaves(TreeNode *);
}; // Solution class

#endif // __INC_HPP__