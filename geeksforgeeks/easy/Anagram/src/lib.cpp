/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-30
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/anagram-1587115620/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Function is to check whether two strings are anagram of each other or not.
 * @param s1 {string &}
 * @param s2 {string &}
 * @return true | false
 */
bool Solution::areAnagrams(string &s1, string &s2) {
  s1 += s2;
  unordered_map<char, int> tracker;
  for (char &c : s1)
    tracker[c]++;
  for (auto &it : tracker)
    if (it.second & 1) return false;
  return true;
}