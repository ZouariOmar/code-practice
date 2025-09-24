/**
 * @file      Get Max from Stack.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Get Max from Stack source file
 * @version   0.1
 * @date      09/20/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/stack-bonus-problems/problem/get-max-from-stack geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <stack>

//? Function(s)/Class(es) prototype dev part
class SpecialStack {
private:
  std::stack<int> stk;
  int maxElement;

public:
  void push(int x) {
    if (stk.empty()) {
      stk.push(x);
      maxElement = x;
    } else if (x <= maxElement) {
      stk.push(x);
    } else {
      stk.push(2 * x - maxElement);
      maxElement = x;
    }
  }

  void pop() {
    if (stk.empty())
      return;
    int topVal(stk.top());
    if (maxElement < topVal)
      maxElement = 2 * maxElement - topVal;
    stk.pop();
  }

  int peek() {
    if (stk.empty())
      return -1;
    int topVal(stk.top());
    return (topVal <= maxElement) ? topVal : maxElement;
  }

  bool isEmpty() {
    return stk.empty();
  }

  int getMax() {
    return stk.empty() ? -1 : maxElement;
  }
}; // SpecialStack class

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
