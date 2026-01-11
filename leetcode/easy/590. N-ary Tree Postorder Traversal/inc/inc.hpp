/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      27-08-2024
 * @link      https://leetcode.com/problems/n-ary-tree-postorder-traversal
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

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Node {  // Definition for a Node.
 public:
  // Vars declaration part
  int val;
  vector<Node *> children;

  // Constructors declaration part
  Node(int);
  Node(int, vector<Node *>);
};  // Node class

class Solution {
  private:
    void partition(Node *, vector<int> &);
 public:
  vector<int> postorder(Node *);
};  // Solution class

#endif