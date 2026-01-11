/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-15
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/separate-black-and-white-balls/?envType=daily-question&envId=2024-10-15 leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief 
 * @param s string
 * @return long long 
 */
long long Solution::minimumSteps(string s) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long swaps{};
  int black{};
  for (char &it : s)
    (it == '0') ? swaps += (long long)black : black++;
  return swaps;
}