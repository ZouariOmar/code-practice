/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-15
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/binary-tree-paths leecode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__  // Or __INC_H__
#define __INC_HPP__  // Or __INC_H__

//? Include prototype declaration part

//* Include std libs (c)
#include <stdio.h>
#include <stdlib.h>

//* Include std libs (c++)
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

//? Structure prototype declaration part
struct TreeNode {
  int val;
  TreeNode *left, *right;
};  // TreeNode struct

//? Class prototype declaration part
class Solution {
 private:
  void dfs(TreeNode *, vector<string> &, string);

 public:
  vector<string> binaryTreePaths(TreeNode*);
};  // Solution class

#endif  // __INC_HPP__