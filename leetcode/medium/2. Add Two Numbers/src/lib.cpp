/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-07-2024
 * @link      https://leetcode.com/problems/add-two-numbers
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief You are given two non-empty linked lists representing two non-negative integers.
 * *
 * The digits are stored in reverse order, and each of their nodes contains a single digit.
 * *
 * Add the two numbers and return the sum as a linked list.
 *
 * @param l1
 * @param l2
 * @return ListNode*
 */
ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
  ListNode* dummyHead = new ListNode(0);
  ListNode* tail = dummyHead;
  int carry = 0;

  while (l1 != nullptr || l2 != nullptr || carry != 0) {
    int digit1 = (l1 != nullptr) ? l1->val : 0;
    int digit2 = (l2 != nullptr) ? l2->val : 0;

    int sum = digit1 + digit2 + carry;
    int digit = sum % 10;
    carry = sum / 10;

    ListNode* newNode = new ListNode(digit);
    tail->next = newNode;
    tail = tail->next;

    l1 = (l1 != nullptr) ? l1->next : nullptr;
    l2 = (l2 != nullptr) ? l2->next : nullptr;
  }

  ListNode* result = dummyHead->next;
  delete dummyHead;
  return result;
}