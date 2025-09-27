/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-17
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Node::Node object
 *
 * @param x {int &}
 */
Node::Node(int &x)
    : data(x) {};

Node *Solution::reverseList(Node *head) {
  Node *curr = head, *prev{nullptr}, *next;
  while (curr) {
    next = curr->next;
    curr->next = prev;
    prev = curr, curr = next;
  }
  return prev;
}