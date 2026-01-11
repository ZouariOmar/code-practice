/**
 * @file    2900. Longest Unequal Adjacent Groups Subsequence I.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   2900. Longest Unequal Adjacent Groups Subsequence I source file
 * @version 0.1
 * @date    2025-05-15
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  std::vector<std::string> getLongestSubsequence(std::vector<std::string> &words, std::vector<int> &groups) {
    std::vector<std::string> result;
    int last(-1);
    for (size_t i{}, len(words.size()); i < len; ++i)
      if (groups[i] != last)
        result.push_back(words[i]), last = groups[i];
    return result;
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
