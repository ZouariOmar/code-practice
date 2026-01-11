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

/*
#include <nameOfLib.c>   || #include "nameOfLib.c"
#include <nameOfLib.h>   || #include "nameOfLib.h"
*/

//? ------------------------------ COLORS PROTOTYPE DECLARATION PART ------------------------------
/*
 * TEXT COLORS
 ** define COLOR "ANSI CODE"...
 * BACKGROUND COLORS
 ** define bgCOLOR "ANSI CODE"...
 */

//? -------------------------------  MSG PROTOTYPE DECLARATION PART -------------------------------
/*
 * ERROR_MSG
 ** define errorMsgXX...
 * SUCCESS_MSG
 ** define successMsgXX...
 */

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------

struct ListNode {
  int val;
  ListNode* next;
  ListNode()
      : val(0), next(nullptr) {}
  ListNode(int x)
      : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next)
      : val(x), next(next) {}
};

//? ----------------------------- FUNCTIONS PROTOTYPE DECLARATION PART -----------------------------

class Solution {
 public:
  ListNode* mergeNodes(ListNode* head);
};

#endif