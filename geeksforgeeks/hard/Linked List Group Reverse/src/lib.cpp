/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-20
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Reverse every k node in the linked list. If the number of nodes is not a multiple of k then the left-out nodes in the end, should be considered as a group and must be reversed.
 *
 * @param head {Node *}
 * @param k int
 * @return Node*
 */
Node *Solution::reverseKGroup(Node *head, int k) {
  vector<Node *> rv; // Vector to reverse nodes every `k` node

  while (head)
    rv.push_back(head), head = head->next;

  int n = rv.size(), s = 0;
  while (s < rv.size())
    reverse(rv.begin() + s, rv.begin() + min(s + k, n)), s += k;

  head = rv[0];
  Node *temp = head;
  for (Node *it : rv)
    temp->next = it, temp = temp->next;

  return temp->next = nullptr, head;
}