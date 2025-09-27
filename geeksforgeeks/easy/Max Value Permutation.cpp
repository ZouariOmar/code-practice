/**
 * @file    Max Value Permutation.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Max Value Permutation source file
 * @version 0.1
 * @date    2025-06-02
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/maximize-arrii-of-an-array0026/1?page=2&difficulty=Easy&sortBy=submissions geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int maxValue(std::vector<int> &arr) {
    const int MOD = 1e9 + 7;
    std::sort(arr.begin(), arr.end());
    long long result{};
    for (int i = 0; i < arr.size(); i++)
      result = (result + (arr[i] * 1LL * i) % MOD) % MOD;
    return (int)result;
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
