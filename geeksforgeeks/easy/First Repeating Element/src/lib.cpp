/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-05
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/first-repeating-element4018 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

/**
 * @fn        Solution::firstRepeated(std::vector<int> &)
 * @brief     Function to return the position of the first repeating element
 * @param arr {std::vector<int> &}
 * @return    int
 */
int Solution::firstRepeated(std::vector<int> &arr) {
  std::unordered_map<int, int> ump;
  int result{std::numeric_limits<int>::max()};
  for (size_t i{}, len{arr.size()}; i < len; i++)
    (ump.count(arr[i])) ? result = std::min(result, ump[arr[i]]) : ump[arr[i]] = i + 1;
  return (result == std::numeric_limits<int>::max()) ? -1 : result;
}