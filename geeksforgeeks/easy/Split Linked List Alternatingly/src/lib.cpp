/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-16
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/split-singly-linked-list-alternatingly/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Function to split a linked list into two lists alternately
 * @param head Node *
 * @return vector<Node *>
 */
vector<Node *> Solution::alternatingSplitList(Node *head) {
  if (!head->next) return {head, nullptr};

  Node *head1 = head, *head2 = head->next;
  Node *tail1 = head1, *tail2 = head2;

  while (tail2) {
    tail1->next = tail2->next;
    tail1 = tail1->next;

    if (tail1)
      tail2->next = tail1->next;
    tail2 = tail2->next;
  }

  return {head1, head2};
}