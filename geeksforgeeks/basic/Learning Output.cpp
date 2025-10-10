/**
 * @file      Learning Output.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Learning Output source file
 * @version   0.1
 * @date      04/10/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/problems/learning-output4058/1?page=2&sortBy=difficulty geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part

class Solution {
public:
  void Learning(int a[], int n, float &pos, float &neg, float &zero) {
    for (size_t i{}; i < n; ++i) {
      if (a[i] > 0)
        ++pos;
      else if (a[i] < 0)
        ++neg;
      else
        ++zero;
    }
    pos = n / pos, neg = n / neg, zero = n / zero;
  }
}; // Solution class

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
