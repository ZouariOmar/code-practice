/**
 * @file      4 Sum – Count quadruplets with given sum.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     4 Sum – Count quadruplets with given sum source file
 * @version   0.1
 * @date      09/01/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/hashing-bonus-problem/problem/count-quadruplets-with-given-sum geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <cstddef>
#include <iostream>
#include <unordered_map>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int countSum(std::vector<int> &arr, int target) {
    size_t len{arr.size()};
    unsigned int count{};
    std::unordered_map<int, int> mp;
    for (size_t i{}; i < len - 1; ++i) {
      for (size_t j{i + 1}; j < len; ++j)
        count += mp[target - (arr[i] + arr[j])];
      for (size_t j{}; j < i; ++j)
        ++mp[arr[i] + arr[j]];
    }
    return count;
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
