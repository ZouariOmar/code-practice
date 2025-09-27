/**
 * @file      Stock span problem.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Stock span problem source file
 * @version   0.1
 * @date      09/12/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/stack-gfg-160/problem/stock-span-problem-1587115621 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <stack>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  std::vector<int> calculateSpan(std::vector<int> &arr) {
    size_t n(arr.size());
    std::vector<int> span(n);
    std::stack<int> s;
    for (size_t i{}; i < n; ++i) {
      while (!s.empty() && arr[s.top()] <= arr[i])
        s.pop();
      span[i] = s.empty() ? i + 1 : i - s.top();
      s.push(i);
    }
    return span;
  }
};
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
