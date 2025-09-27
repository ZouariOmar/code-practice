/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-20
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/sort-a-k-sorted-doubly-linked-list/1 GFG @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c)
#include <stdio.h>
#include <stdlib.h>

//* Include std libs (c++)
#include <iostream>
#include <queue>
#include <vector>

//* Use stander workspace
using namespace std;

//? Structure prototype declaration part
struct DLLNode {
  int data;
  DLLNode *next, *prev;
  DLLNode(int);
};  // DLLNode struct

//? Class prototype declaration part

class Solution {
 public:
  DLLNode *sortAKSortedDLL(DLLNode *, int);
};  // solution class

#endif  // __INC_HPP__Or __INC_H__