/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-07-2024
 * @link      https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>
#include <vector>

// Use the stander workspace
using namespace std;

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------

// Defining the BT structure
struct TreeNode {
  int val;
  TreeNode *right;
  TreeNode *left;
  TreeNode(int x)
      : val(x) {};
};

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Solution {
  private:
  TreeNode* constructBST(vector<int>, int, int);
 public:
  TreeNode* sortedArrayToBST(vector<int> &);
  void print_BT(TreeNode *);
};

#endif