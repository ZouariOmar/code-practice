/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-04
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/lowest-common-ancestor-of-deepest-leaves leetcode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std headers (c++)
#include <iostream>

//? Structure(s) prototype declaration part
struct TreeNode {
  int val;
  TreeNode *left, *right;
}; // TreeNode struct

//? Class(es) prototype declaration part
class Solution {
private:
  std::pair<TreeNode *, int> lcaDeepestLeavesHelper(TreeNode *);

public:
  TreeNode *lcaDeepestLeaves(TreeNode *);
}; // Solution class

#endif // __INC_HPP__