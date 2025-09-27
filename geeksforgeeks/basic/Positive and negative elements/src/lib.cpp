/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-07
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/positive-and-negative-elements4613/1?page=2&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Arrange the array such that every positive element is followed by a negative element.
 *
 * @details   `arr` containing equal number of positive and negative elements
 * @class     Solution
 * @param arr std::vector<int>
 * @return    std::vector<int>
 */
std::vector<int> Solution::arranged(std::vector<int> &arr) {
  std::vector<int> negatives, positives;
  for (const int &it :arr)
    (it < 0) ? negatives.push_back(it) : positives.push_back(it);
  
  std::vector<int> result;
  for (size_t i{}, len{positives.size()}; i < len; i++)
    result.push_back(positives[i]), result.push_back(negatives[i]);
  return result;
}
