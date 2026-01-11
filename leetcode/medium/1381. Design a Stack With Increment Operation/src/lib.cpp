/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-09-30
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/design-a-stack-with-increment-operation leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new CustomStack::CustomStack object
 * @param maxSize int
 */
CustomStack::CustomStack(int maxSize)
    : maxLen(maxSize) {
}

/**
 * @brief ### Push a new value
 * @param val int
 */
void CustomStack::push(int val) {
  if (stk.size() == maxLen) return;
  stk.push(val);
}

/**
 * @brief ### Return the top stack value
 * @return int
 */
int CustomStack::pop() {
  if (stk.empty()) return -1;  // Stack is empty

  // Store the top value to return it
  int res{stk.top()};

  // Rm the top value
  stk.pop();

  return res;
}

/**
 * @brief ### Increments the bottom k elements of the stack by val. If there are less than k elements in the stack, increment all the elements in the stack.
 * @param k int
 * @param val int
 */
void CustomStack::increment(int k, int val) {
  vector<int> cpy_stk;
  size_t i{}, limit = min(k, (int)stk.size());  // Determine the range to increment

  // Pop all elements from the stack into the vector
  while (!stk.empty()) {
    cpy_stk.push_back(stk.top());
    stk.pop();
  }

  // Increment the bottom k elements in the vector
  for (i = 0; i < limit; i++)
    cpy_stk[cpy_stk.size() - 1 - i] += val;  // Increment from bottom of stack

  // Push the elements back into the stack
  for (i = cpy_stk.size(); i > 0; i--) {
    stk.push(cpy_stk[i - 1]);
  }
}

/*
* Other Solution
static const int speedup = []{ios::sync_with_stdio(0); cin.tie(0); return 0;}();
int stk[2000];

class CustomStack {
    int sz, smax, d;

public:
    CustomStack(int maxSize) : sz{0}, smax{2*maxSize}, d{0} {
    }

    void push(int x) {
        if (sz != smax) stk[sz++] = x-d, stk[sz++] = 0;
    }

    int pop() {
        if (!sz) return -1;
        d += stk[--sz];
        return d + stk[--sz];
    }

    void increment(int k, int val) {
        if (sz) stk[min(sz, 2*k) - 1] += val;
    }
};
*/