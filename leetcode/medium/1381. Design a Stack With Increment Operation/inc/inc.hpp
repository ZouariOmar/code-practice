/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-09-30
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/design-a-stack-with-increment-operation leecode @endlink
 */

/**
 * ? Constraints:
 * * 1 <= maxSize, x, k <= 1000
 * * 0 <= val <= 100
 * * At most 1000 calls will be made to each method of increment, push and pop each separately.
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <stack>
#include <vector>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part

class CustomStack {
 private:
  stack<int> stk;
  size_t maxLen;

 public:
  CustomStack(int);
  void push(int);
  int pop();
  void increment(int, int);
};  // CustomStack class

#endif