/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-03
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/implement-stack-using-array/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class MyStack {
private:
  int arr[1000];
  int top;

public:
  MyStack();
  int pop();
  void push(int);
};

#endif  // __INC_HPP__