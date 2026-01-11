/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      19-09-2024
 * @link      https://leetcode.com/problems/remove-duplicates-from-sorted-list
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_HPP__
#define __INC_HPP__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>

// Use the stander workspace
using namespace std;

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------

struct ListNode {
  int val;
  ListNode *next;
  ListNode();
  ListNode(int);
};  // ListNode structure

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

/**
 * @brief ### Constraints
 * *
 * * The number of nodes in the list is in the range[0, 300]
 * *
 * * -100 <= Node.val <= 100
 * *
 * * The list is guaranteed to be sorted in ascending order.
 */

class Solution {
 public:
  ListNode *deleteDuplicates(ListNode *);
};

#endif