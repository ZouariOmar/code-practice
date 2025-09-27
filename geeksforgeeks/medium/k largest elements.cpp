/**
 * @file      k largest elements.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     k largest elements source file
 * @version   0.1
 * @date      08/24/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/heap-gfg-160/problem/k-largest-elements4206 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  std::vector<int> kLargest(std::vector<int> &arr, int k) {
    sort(arr.rbegin(), arr.rend());
    return std::vector<int>(arr.begin(), arr.begin() + k);
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
