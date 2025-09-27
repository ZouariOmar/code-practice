/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-21
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?page=3&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Function to find the data of kth node from the end of a linked list
 *
 * @class      Solution
 * @param head {Node *}
 * @param k    int
 * @return     int
 */
int Solution::getKthFromLast(Node *head, int k) {
  std::vector<int> holder;
  while (head)
    holder.push_back(head->data), head = head->next;
  return (holder.size() < k) ? -1 : *(holder.end() - k);
}