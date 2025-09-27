/**
 * @file    Nth Fibonacci Number.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Nth Fibonacci Number source file
 * @version 0.1
 * @date    2025-05-20
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int nthFibonacci(int n) {
    return (n <= 1) ? n : nthFibonacci(n - 1) + nthFibonacci(n - 2);
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
