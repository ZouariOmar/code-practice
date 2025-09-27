/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-29
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1?page=4&difficulty=Easy&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

/**
 * @fn         Solution::deleteNode(Node *, int)
 * @brief      Function to delete a node from a linked list
 * @note       1 <= x <= size of linked list
 * @param head {Node *}
 * @param x    int
 * @return     {Node *}
 */
Node *Solution::deleteNode(Node *head, int x) {
  if (x == 1)
    return head->next;

  Node *prv{head}, *current(head);
  while (x-- > 1)
    prv = current, current = current->next;

  prv->next = current->next;
  delete current;
  current = nullptr;
  return head;
}