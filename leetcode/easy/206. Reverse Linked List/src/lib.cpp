/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-30
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/reverse-linked-list leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the reversed SSL
 * @param head ListNode *
 * @return ListNode*
 */
ListNode *Solution::reverseList(ListNode *head) {
  ListNode *prev{nullptr}, *current{head}, *next;
  while (current) {
    next = current->next;  // Store next pointer
    current->next = prev;  // Reverse current node's next pointer

    // Move pointers one position ahead
    prev = current;
    current = next;
  }
  return prev;
}