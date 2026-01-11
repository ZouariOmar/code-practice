/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/merge-two-sorted-lists
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

ListNode* Solution::mergeTwoLists(ListNode* list1, ListNode* list2) {
  // Create a dummy node to simplify edge cases
  ListNode dummy(0);
  ListNode* tail = &dummy;

  // Traverse both lists and link the nodes in sorted order
  while (list1 != nullptr && list2 != nullptr) {
    if (list1->val <= list2->val) {
      tail->next = list1;
      list1 = list1->next;
    } else {
      tail->next = list2;
      list2 = list2->next;
    }
    tail = tail->next;
  }

  // Attach the remaining nodes from either list1 or list2
  if (list1 != nullptr) {
    tail->next = list1;
  } else {
    tail->next = list2;
  }

  return dummy.next;
}