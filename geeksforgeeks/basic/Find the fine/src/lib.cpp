/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-23
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/find-the-fine4353/1?page=2&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### The task is to find the total fine which will be collected on the given date
 *
 * @class Solution
 * @param date int
 * @param car {vector<int> &}
 * @param fine {vector<int> &}
 * @return {long long int}
 */
long long int Solution::totalFine(int date, vector<int> &car, vector<int> &fine) {
  long long int sum{};
  size_t len{car.size()};

  if (date & 1) {
    for (size_t i{}; i < len; i++)
      if (!(car[i] & 1))
        sum += fine[i];
  } else
    for (size_t i{}; i < len; i++)
      if (car[i] & 1)
        sum += fine[i];

  return sum;
}