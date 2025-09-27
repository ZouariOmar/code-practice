/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-03
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Check whether the length of the linked list is even or not. Return true if it is even, otherwise false.
 * @param head Node *
 * @return true or false
 */
bool Solution::isLengthEven(Node *head) {
  size_t len{};  // Length of the SLL
  while (head) {
    len++;
    head = head->next;
  }
  return !(len & 1);
}