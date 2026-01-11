/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      06-09-2024
 * @link      https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array
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

struct ListNode {
  int val;
  ListNode *next;
  ListNode();
  ListNode(int);
};

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Solution {
 private:
  ListNode *del_node(ListNode *, int);

 public:
  ListNode *modifiedList(vector<int> &, ListNode *);
  //! Testing function (show the result root)
  void showSLL(ListNode *);
};

#endif