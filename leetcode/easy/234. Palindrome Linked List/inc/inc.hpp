/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-13
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/palindrome-linked-list leecode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part
//* Include std libs (c++)
#include <algorithm>
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

//? Structure prototype declaration part
struct ListNode {
  int val;
  ListNode *next;
};  // ListNode struct

//? Class prototype declaration part
class Solution {
 public:
  bool isPalindrome(ListNode *);
};  // Solution class

#endif  // __INC_HPP__