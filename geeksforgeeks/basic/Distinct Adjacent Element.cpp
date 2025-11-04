/**
 * @file      Distinct Adjacent Element.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Distinct Adjacent Element source file
 * @version   0.1
 * @date      2025-10-30
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/problems/distinct-adjacent-element2121/1?page=2&sortBy=difficulty geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <unordered_map>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  bool distinctAdjacentElement(std::vector<int> &arr) {
    std::unordered_map<int, int> mp;
    for (auto i : arr)
      ++mp[i];

    int maxFreq{};
    for (const std::pair<const int, int> &i : mp)
      maxFreq = std::max(maxFreq, i.second);

    return maxFreq <= (arr.size() + 1) / 2;
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
