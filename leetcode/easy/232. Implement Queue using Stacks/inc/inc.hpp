/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-12
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/implement-queue-using-stacks/ leecode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part
//* Include std libs (c++)
#include <iostream>
#include <stack>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class MyQueue {
 private:
  stack<int> in_stk;   // Stack for push operations
  stack<int> out_stk;  // Stack for pop and peek operations

 public:
  MyQueue();
  void push(int);
  int pop();
  int peek();
  bool empty();
};  // MyQueue class

#endif  // __INC_HPP__