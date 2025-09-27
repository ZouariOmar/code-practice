/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-03
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/implement-stack-using-array/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new MyStack::MyStack object
 */
MyStack::MyStack()
    : top(-1), arr{-1} {
}

/**
 * @brief ###
 */
void MyStack::push(int x) {
  arr[++top] = x;
}

/**
 * @brief ### Function to remove an item from top of the stack.
 *
 * @return int
 */
int MyStack::pop() {
  if (top == -1)
    return -1;

  return arr[top--];
}