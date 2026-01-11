/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-08
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/implement-stack-using-queues leecode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part
//* Include std libs (c++)
#include <iostream>
#include <queue>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class MyStack {
 private:
  deque<int> q;
 public:
  MyStack();
  void push(int);
  int pop();
  int top();
  bool empty();
};  // MyStack class

#endif  // __INC_HPP__