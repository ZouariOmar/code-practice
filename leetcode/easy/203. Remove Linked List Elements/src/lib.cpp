/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-26
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/remove-linked-list-elements leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new ListNode::ListNode struct
 * @param x int
 */
ListNode::ListNode(int x)
    : val(x), next(nullptr) {};

/**
 * @brief ### Remove all the nodes of the linked list that has `Node.val == val`, and return the new head.
 * @param head listNode *
 * @param val int
 * @return ListNode*
 */
ListNode *Solution::removeElements(ListNode *head, int val) {
  while (head && head->val == val)
    head = head->next;
  if (!head) return head;

  ListNode *current = head->next, *prev = head;
  while (current) {
    if (current->val == val)
      prev->next = current->next;
    else {
      prev = prev->next;
      current = prev->next;
    }
    current = prev->next;
  }

  return head;
}