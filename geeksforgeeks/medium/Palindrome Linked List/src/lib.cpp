/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-09-2024
 * @link      https://www.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Function to check whether the list is palindrome.
 * @param head Node *
 * @return true or false
 */
bool Solution::isPalindrome(Node *head) {
  sllToVector(head);
  int l{}, h = arr.size() - 1;
  while (h > l) {
    if (arr[l] != arr[h]) return false;
    l++;
    h--;
  }

  return true;
}

/**
 * @brief ### Transfer the data from singly linked list to a vector
 * @param head Node *
 */
void Solution::sllToVector(Node *head) {
  if (!head) return;
  arr.push_back(head->data);
  sllToVector(head->next);
}