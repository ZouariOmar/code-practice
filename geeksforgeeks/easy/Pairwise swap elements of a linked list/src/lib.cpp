/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-09
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1?page=6&difficulty=Easy&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"  

//? Function(s)/Class(es) prototype dev part

/**
 * @fn Solution::pairWiseSwap(Node *head)
 *
 * @brief Swap elements in the linked list pairwise
 * 
 * ====================================
 * 
 * * constraints:
 *
 * - 1 ≤ size of linked list ≤ 10⁶
 *
 * - 1 ≤ elements of linked list ≤ 10⁶
 * 
 * ====================================
 * 
 * @param head {Node *}
 *
 * @return {Node *}
 */
Node *Solution::pairWiseSwap(Node *head) {
  if (!head || !head->next)
    return head;
  Node *second = head->next;
  head->next = pairWiseSwap(second->next);
  second->next = head;
  return second;
}