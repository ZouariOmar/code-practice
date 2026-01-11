/***************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/create-binary-tree-from-descriptions
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

//? Binary Tree struct
struct TreeNode {
  int val;
  struct TreeNode* left;
  struct TreeNode* right;
  TreeNode()
      : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x)
      : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right)
      : val(x), left(left), right(right) {}
};

//? ----------------------------- FUNCTIONS PROTOTYPE DECLARATION PART -----------------------------

class Solution {
 private:
  void create_BTN(TreeNode**, vector<int>);
  int link_BTN(TreeNode**, vector<int>);

 public:
  TreeNode* createBinaryTree(vector<vector<int>>&);
  void printBT(TreeNode*);
};

#endif