/**
 * @file      A. Heist.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     A. Heist source file
 * @version   0.1
 * @date      2025-12-05
 * @copyright Copyright (c) 2025
 * @link      https://codeforces.com/problemset/problem/1041/A codeforces @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    unsigned short n;
    std::cin >> n;
    int *indices = new int[n];
    for (size_t i{}; i < n; ++i) {
      std::cin >> indices[i];
    }

    std::sort(indices, indices + n);
    unsigned int res{};
    for (unsigned short i{}; i < n - 1; ++i)
      res += *(indices + i + 1) - *(indices + i) - 1;

    std::cout << res << std::endl;
    delete[] indices;
  }
}; // Solution class

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  Solution::solve();
  return EXIT_SUCCESS;
}
