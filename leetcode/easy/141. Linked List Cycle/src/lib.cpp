/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-13
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/linked-list-cycle leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new ListNode::ListNode object
 * @param x {int}
 */
ListNode::ListNode(int x)
    : val(x), next(nullptr) {};

/**
 * @brief ### Return true if there is a cycle in the linked list. Otherwise, return false.
 * @param head {ListNode *}
 * @return true or false
 */
bool Solution::hasCycle(ListNode *head) {
  ListNode *slow = head, *fast = head;

  while (slow && fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
      return true;
  }

  return false;
}