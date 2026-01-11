/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-26
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/remove-linked-list-elements leecode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Structure prototype declaration part
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int);
};  // listNode struct

//? Class prototype declaration part
class Solution {
 public:
  ListNode *removeElements(ListNode *, int);
};  // Solution class

#endif  // __INC_HPP__