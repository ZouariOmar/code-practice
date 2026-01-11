/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      19-09-2024
 * @link      https://leetcode.com/problems/remove-duplicates-from-sorted-list
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new ListNode::ListNode structure
 */
ListNode::ListNode()
    : val(0), next(nullptr) {};

/**
 * @brief ### Construct a new ListNode::ListNode structure
 * @param x int
 */
ListNode::ListNode(int x)
    : val(x), next(nullptr) {};

/**
 * @brief #### Given the head of a sorted linked list, delete all duplicates such that each element appears only once.
 * Return the linked list sorted as well.
 * @param head ListNode*
 * @return ListNode*
 */
ListNode *Solution::deleteDuplicates(ListNode *head) {
  if (!head || !head->next) return head;

  ListNode *current = head;
  while (current->next) {
    if (current->val == current->next->val) {
      ListNode *tmp = current->next;
      current->next = current->next->next;
      delete tmp;
      tmp = nullptr;
    } else
      current = current->next;
  }

  return head;
}

void display_sll(ListNode *head) {
  if (head) {
    cout << head->val << " ";
    display_sll(head->next);
  }
}