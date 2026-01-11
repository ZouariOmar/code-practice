/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-20
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/fizz-buzz @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"  

//? Function/Class prototype dev part

/**
 * @brief ### Return a string array answer (1-indexed)
 *
 * @class   Solution
 * @param n int
 * @return  std::vector<std::string>
 */
std::vector<std::string> Solution::fizzBuzz(int n) {
  std::vector<std::string> result;
  for (int i = 1; i <= n; i++) {
    bool div_3{i % 3 == 0}, div_5{i % 5 == 0};
    if (div_3 && div_5)
      result.push_back("FizzBuzz");
    else if (div_3)
      result.push_back("Fizz");
    else if (div_5)
      result.push_back("Buzz");
    else
      result.push_back(std::to_string(i));
  }
  return result;
}
