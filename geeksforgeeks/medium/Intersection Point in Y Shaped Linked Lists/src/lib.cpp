/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-13
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the point where two linked lists intersect.
 * ! Your program took more time than expected.Expected Time Limit : 2.18sec
 * @param head1 {Node *}
 * @param head2 {Node *}
 * @return int
 */
int Solution::intersectPoint(Node *head1, Node *head2) {
  vector<Node *> arr;  // Vector to store the `head 1`

  for (; head1 != nullptr; head1 = head1->next)
    arr.push_back(head1);

  for (; head2 != nullptr; head2 = head2->next)  // Find the intersect node
    if (find(arr.begin(), arr.end(), head2) != arr.end())
      return head2->data;
  return -1;
}

/*
* Other Solution
int Solution::intersectPoint(Node *head1, Node *head2) {
  Node* t1 = head1;
  Node* t2 = head2;
  if (!t1 && !t2) return -1;
  while (t1 != t2) {
    t1 = t1->next, t2 = t2->next;
    if (t1 == t2) return t1->data;
    if (!t1) t1 = head2;
    if (!t2) t2 = head1;
  }

  return -1;
}
*/