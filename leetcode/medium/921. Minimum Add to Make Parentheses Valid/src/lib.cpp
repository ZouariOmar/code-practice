/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-09
 * @copyright Copyright (c) 2024
 * @link https://www.youtube.com/watch?v=bNyUyrR0PHo leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the minimum number of moves required to make s valid.
 * @param s string
 * @return int
 */
int Solution::minAddToMakeValid(string s) {
  int open{}, close{};
  for (auto c : s) {
    if (c == '(')
      open++;
    else {
      if (open > 0)
        open--;
      else
        close++;
    }
  }
  return open + close;
}