/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-07-2024
 * @link      https://leetcode.com/problems/add-two-numbers
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>

// Use the stander workspace
using namespace std;

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------

// Declare the SLL structure
struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x)
      : val(x), next(nullptr) {};
};

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

class Solution {
 public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};

#endif