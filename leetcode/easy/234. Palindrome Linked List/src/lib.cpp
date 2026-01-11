/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-13
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/palindrome-linked-list leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return true if it is a palindrome or false otherwise.
 * @param head ListNode *
 * @return true | false
 */
bool Solution::isPalindrome(ListNode *head) {
  vector<int> arr,  // Vector to store the data of SLL
      r_arr;

  for (; head != nullptr; head = head->next)  // SLL to vector
    arr.push_back(head->val);

  return r_arr = arr, reverse(r_arr.begin(), r_arr.end()), arr == r_arr;
}