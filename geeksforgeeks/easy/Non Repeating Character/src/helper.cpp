/**
 * @file    helper.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   helper source file
 * @version 0.1
 * @date    2025-04-28
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/non-repeating-character geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include "../include/inc.hpp"
#include <unordered_map>

//? Function(s)/Class(es) prototype dev part

char Solution::nonRepeatingChar(std::string &s) {
  std::unordered_map<char, std::pair<unsigned int, size_t>> count;
  size_t len(s.length());
  for (size_t i{}; i < len; i++)
    count[s[i]].first++, count[s[i]].second = i;

  char result('$');
  size_t less_index(len);
  for (const std::pair<char, std::pair<unsigned int, size_t>> &it : count)
    if (it.second.first == 1 && it.second.second < less_index)
      result = it.first, less_index = it.second.second;
  return result;
}
