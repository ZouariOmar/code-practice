/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      02-08-2024
 * @link      https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1?page=1&sortBy=submissions
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>
#include <vector>
#include <queue>

// Use the stander workspace
using namespace std;

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------

// D&D the BT structure
struct Node {
  int data;
  Node *left;
  Node *right;
  Node(int x)
      : data(x), left(nullptr), right(nullptr) {};
};

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

vector<int> leftView(Node *);

#endif