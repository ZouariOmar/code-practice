/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-26
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/friendly-array2009/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Calculate the friendliness of the array
 * ! Friendliness is the sum of the absolute differences between each element and its closest friend in the array.
 * @param arr {vector<int> &}
 * @return int
 */
int Solution::calculateFriendliness(vector<int> &arr) {
  int sum{};
  size_t len{arr.size()};
  for (size_t i{}; i < len - 1; ++i)
    sum += abs(arr[i] - arr[i + 1]);
  return sum += abs(arr[len - 1] - arr[0]), sum;
}