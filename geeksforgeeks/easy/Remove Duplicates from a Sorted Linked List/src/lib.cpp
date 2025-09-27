/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-23
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1?page=2&difficulty=Easy&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Node::Node object
 *
 * @param x int
 */
Node::Node(int x)
    : data(x), next(nullptr) {};

/**
 * @brief Function to remove duplicates from sorted linked list
 *
 * @class      Solution
 * @param head {Node *}
 * @return     {Node *}
 */
Node *Solution::removeDuplicates(Node *head) {
  if (!head->next)
    return head;
  if (!head->next->next)
    return (head->data == head->next->data) ? head->next : head;

  Node *current{head};
  while (current->next)
    (current->data == current->next->data) ? current->next = current->next->next : current = current->next;

  return head;
}