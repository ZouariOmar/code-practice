/**
 * @file      Min Subsets with Consecutive Numbers.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Min Subsets with Consecutive Numbers source file
 * @version   0.1
 * @date      09/02/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/hashing-bonus-problem/problem/min-subsets-with-consecutive-numbers0601 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int numOfSubset(std::vector<int> &arr) {
    std::sort(arr.begin(), arr.end());
    unsigned int ans{1};
    for (size_t i{}, len{arr.size()}; i < len - 1; ++i) {
      ans += arr[i] + 1 != arr[i + 1];
    }
    return ans;
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
