/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-20
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/sort-a-k-sorted-doubly-linked-list/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * ? Constraints:
 * 1 <= number of nodes <= 10^5
 * 1 <= k < number of nodes
 * 1 <= node->data <= 10^9
 */

/**
 * @brief ### function to sort a k sorted doubly linked list
 * @param head DLLNode *
 * @param k int
 * @return DLLNode *
 */
DLLNode *Solution::sortAKSortedDLL(DLLNode *head, int k) {
  priority_queue<int, vector<int>, greater<int> > pq;
  DLLNode* tail = head, *nexty = nullptr;
  int freq = k + 1;

  while (tail && freq > 0) {
    pq.push(tail->data);
    tail = tail->next;
    nexty = tail;
    freq--;
  }

  tail = head;
  while (nexty) {
    int minVal = pq.top();
    pq.pop();
    tail->data = minVal;
    tail = tail->next;
    pq.push(nexty->data);
    nexty = nexty->next;
  }

  while (tail && !pq.empty()) {
    int minVal = pq.top();
    pq.pop();
    tail->data = minVal;
    tail = tail->next;
  }

  return head;
}