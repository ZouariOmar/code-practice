/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-06
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/count-complete-tree-nodes leecode @endlink
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
  private:
    int count;
 public:
  Solution();
  int countNodes(TreeNode *);
};  // Solution class

#endif  // __INC_HPP__