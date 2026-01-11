/***************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/step-by-step-directions-from-a-binary-tree-node-to-another
 ***************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------
//* include std libs
#include <iostream>
#include <vector>

//* use the stander workspace
using namespace std;

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------

struct TreeNode {
  int val;
  TreeNode *right;
  TreeNode *left;
  TreeNode()
      : val(0), right(nullptr), left(nullptr) {};
  TreeNode(int x)
      : val(x), left(nullptr), right(nullptr) {};
  TreeNode(int x, TreeNode *right, TreeNode *left)
      : val(x), left(left), right(right) {};
};

//? ----------------------------- FUNCTIONS PROTOTYPE DECLARATION PART -----------------------------

class Solution {
 public:
  bool findNode(TreeNode *, int, string &);
  string getDirections(TreeNode *, int, int);
  void displayBT(TreeNode *);
};

#endif