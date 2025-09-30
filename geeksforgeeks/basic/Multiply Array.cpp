/**
 * @file      Multiply Array.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Multiply Array source file
 * @version   0.1
 * @date      09/28/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/problems/multiply-array-1658312632/1?page=2&sortBy=difficulty geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int product(int arr[], int n) {
    int res(1);
    for (size_t i{}; i < n; ++i)
      res *= arr[i];
    return res;
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
