/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-19
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1 GFG @endlink
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
    : data(x) {};

/**
 * @brief ### Merge both lists and return the head of the sorted merged list.
 *
 * @param head1 {Node *}
 * @param head2 {Node *}
 * @return {Node *}
 */
Node *Solution::sortedMerge(Node *head1, Node *head2) {
  if (!head1 && !head2)
    return NULL;
  if (!head1)
    return head2;
  if (!head2)
    return head1;

  if (head1->data < head2->data) {
    head1->next = sortedMerge(head1->next, head2);
    return head1;
  } else {
    head2->next = sortedMerge(head1, head2->next);
    return head2;
  }

  return nullptr;
}