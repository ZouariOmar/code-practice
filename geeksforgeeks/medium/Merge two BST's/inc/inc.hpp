/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      23-07-2024
 * @link      https://www.geeksforgeeks.org/problems/merge-two-bst-s/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>
#include <vector>
#include <algorithm>

// Use the stander workspace
using namespace std;

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------
struct Node {
  int data;
  Node *left;
  Node *right;
  Node(int val)
      : data(val), left(nullptr), right(nullptr) {};
};

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Solution {
 private:
  void BST_to_vector(Node *, vector<int> &);

 public:
  vector<int> merge(Node *, Node *);
};
#endif