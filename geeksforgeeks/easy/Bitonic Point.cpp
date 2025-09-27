/**
 * @file    Bitonic Point.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Bitonic Point source file
 * @version 0.1
 * @date    2025-05-02
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int findMaximum(std::vector<int> &arr) {
    int bp(arr[0]);
    for (size_t i(1), len(arr.size()); i < len; i++) {
      if (arr[i] > bp)
        bp = arr[i];
      else
        break;
    }
    return bp;
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
