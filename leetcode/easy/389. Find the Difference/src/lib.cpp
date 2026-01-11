/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-05
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/find-the-difference leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the letter that was added to `t`
 *
 * @class   Solution
 * @param s std::string
 * @param t std::string
 * @return  char
 */
char Solution::findTheDifference(std::string s, std::string t) {
  std::unordered_map<char, int> count;

  for (const char &c : t)
    count[c]++;

  for (const char &c : s) {
    count[c]--;
    if (count[c] == 0)
      count.erase(c);
  }

  return count.begin()->first;
}
