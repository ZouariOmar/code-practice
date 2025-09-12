/**
 * @file      A. QAQ.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     A. QAQ source file
 * @version   0.1
 * @date      24/08/2025
 * @copyright Copyright (c) 2025
 * @link      https://codeforces.com/problemset/problem/894/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve(void) {
    std::string s;
    std::cin >> s;
    unsigned int count{};
    for (size_t i{}, len(s.size()); i < len; ++i) {
      if (s[i] != 'Q')
        continue;
      for (size_t j{i + 1}; j < len; ++j) {
        if (s[j] != 'A')
          continue;
        for (size_t k{j + 1}; k < len; ++k) {
          if (s[k] != 'Q')
            continue;
          ++count;
        }
      }
    }
    std::cout << count << std::endl;
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
