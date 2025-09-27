/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-26
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new node::node struct
 * @param x int
 */
node::node(int x)
    : data(x), next(nullptr) {};

/**
 * @brief ### Count the number of occurrences of the given key in the linked list.
 * @param head node *
 * @param key int
 * @return int
 */
int Solution::count(node *head, int key) {
  int cnt{};
  while (head) {
    if (head->data == key)
      cnt++;
    head = head->next;
  }
  return cnt;
}