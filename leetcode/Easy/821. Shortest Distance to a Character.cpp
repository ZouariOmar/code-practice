/**
 * @file      821. Shortest Distance to a Character.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     821. Shortest Distance to a Character source file
 * @version   0.1
 * @date      2025-10-03
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/shortest-distance-to-a-character leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  std::vector<int> shortestToChar(std::string s, char c) {
    int n = s.size(), pos = -n;
    std::vector<int> res(n, n);

    for (size_t i{}; i < n; ++i) {
      if (s[i] == c)
        pos = i;
      res[i] = i - pos;
    }

    for (int i = pos - 1; i >= 0; --i) {
      if (s[i] == c)
        pos = i;
      res[i] = std::min(res[i], pos - i);
    }

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
