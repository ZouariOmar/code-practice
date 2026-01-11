/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      10-09-2024
 * @link      https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/?envType=daily-question&envId=2024-09-10
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Construct a new List Node::List Node struct
 * @param x int
 */
ListNode::ListNode(int x)
    : val(x), next(nullptr) {};

ListNode* Solution::insertGreatestCommonDivisors(ListNode* head) {
  if (!head || !head->next) return head;

  ListNode *current = head->next, *prev = head;

  while (current) {
    ListNode *node = new ListNode(gcd(prev->val, current->val));
    prev->next = node;
    node->next = current;

    // To the next nodes
    prev = current;
    current = current->next;
  }

  return head;
}

/**
 * @brief ### Find the GCD of the x and y
 * @param x int
 * @param y int
 * @return int 
 */
int Solution::gcd(int x, int y) {
  if (!x) return y;
  return gcd(y % x, x);
}