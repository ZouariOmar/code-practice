/**
 * @file    Power of 2.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Power of 2 source file
 * @version 0.1
 * @date    2025-05-11
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/power-of-2-1587115620/1?page=1&difficulty=Easy&sortBy=submissions geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <cmath>
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  // Function to check if given number n is a power of two.
  bool isPowerofTwo(int n) {
    return !(n & (n - 1));
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
