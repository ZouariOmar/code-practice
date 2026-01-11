/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief The main include file
 * @version 0.1
 * @date 2024-09-29
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/balanced-binary-tree leecode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

/*
 * Include std libs (c)
 * Include custom inc file (h/hpp)
 */

//? Structure prototype declaration part

struct TreeNode {
  int val;
  TreeNode *left, *right;
  TreeNode(int);
  ;
};  // TreeNode structure

//? Class prototype declaration part

class Solution {
 private:
  int height(TreeNode *);

 public:
  bool isBalanced(TreeNode *);
};  // Solution class

#endif