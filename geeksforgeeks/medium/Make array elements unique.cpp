//! Lance the Doxygen file comment Her (in NVIM - `SPACE+d+h`)

/**
 * @file      Make array elements unique.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Make array elements unique source file
 * @version   0.1
 * @date      08/23/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-bonus-problems/problem/make-array-elements-unique--170645 GFG160 @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int minIncrements(std::vector<int> &arr) {
    std::sort(arr.begin(), arr.end());
    unsigned int loss{};
    for (size_t i{}, len(arr.size()); i < len - 1; ++i) {
      if (arr[i] < arr[i + 1])
        continue;
      loss += arr[i] - arr[i + 1] + 1;
      arr[i + 1] = arr[i] + 1;
    }
    return loss;
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
