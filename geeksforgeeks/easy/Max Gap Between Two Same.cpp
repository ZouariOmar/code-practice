/**
 * @file      Max Gap Between Two Same.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     Max Gap Between Two Same source file
 * @version   0.1
 * @date      2026-07-15
 * @copyright Copyright (c) 2026
 * @link      https://www.geeksforgeeks.org/problems/maximum-number-of-characters-between-any-two-same-character4552/1 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int maxCharGap(std::string &s) {
    int first[26];
    std::fill(first, first + 26, -1);
    int ans = -1;

    for (int i = 0; i < s.size(); ++i) {
      int j = s[i] - 'a';

      if (first[j] == -1)
        first[j] = i;
      else
        ans = std::max(ans, i - first[j] - 1);
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
