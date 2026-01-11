/***************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------
//* include std libs
#include <iostream>

//* use the stander workspace
using namespace std;

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode()
      : val(0), next(nullptr) {}
  ListNode(int x)
      : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next)
      : val(x), next(next) {}
};

//? ----------------------------- FUNCTIONS PROTOTYPE DECLARATION PART -----------------------------
class Solution {
 public:
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2);
};

#endif