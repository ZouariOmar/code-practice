/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-07-2024
 * @link      https://www.geeksforgeeks.org/problems/check-for-bst/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <bits/stdc++.h>

// Use the stander workspace
using namespace std;

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------

// Define the Node struct
struct Node {
  int data;
  Node *left;
  Node *right;
  Node(int x)
      : data(x), left(nullptr), right(nullptr) {};
};

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Solution {
 private:
  int maxValue(Node *);
  int minValue(Node *);

 public:
  bool isBST(Node *);
};

#endif