/**
 * @file      Smallest number repeating K times.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Smallest number repeating K times source file
 * @version   0.1
 * @date      2025-10-29
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/problems/smallest-number-repeating-k-times3239/1?page=2&sortBy=difficulty geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <climits>
#include <iostream>
#include <unordered_map>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int findDuplicate(const std::vector<int> &arr, int k) {
    std::unordered_map<unsigned int, unsigned int> map;

    for (const int &it : arr)
      ++map[it];

    unsigned int res = INT_MAX;
    for (const std::pair<unsigned int, unsigned int> &p : map)
      if (p.second == k)
        res = std::min(p.first, res);

    return res == INT_MAX ? -1 : res;
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
