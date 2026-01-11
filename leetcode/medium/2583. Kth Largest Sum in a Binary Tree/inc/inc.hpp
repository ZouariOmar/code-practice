/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-22
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree leecode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

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
  vector<long long> sum_tracker;

 public:
  long long kthLargestLevelSum(TreeNode *, int);
};  // Solution class

#endif  // __INC_HPP__