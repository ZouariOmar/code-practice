/**
 * @file      Implement Lower Bound.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Implement Lower Bound source file
 * @version   0.1
 * @date      08/07/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/searching-bonus-problems/problem/implement-lower-bound geeksforgeeks @endlink
 */
//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int lowerBound(std::vector<int> &arr, int target) {
    return std::distance(arr.begin(), std::lower_bound(arr.begin(), arr.end(), target));
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
