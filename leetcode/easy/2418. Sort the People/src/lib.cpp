/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-07-2024
 * @link      https://leetcode.com/problems/sort-the-people
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Return names sorted in descending order by the people's heights.
 *
 * @param names
 * @param heights
 * @return vector<string>
 */
vector<string> Solution::sortPeople(vector<string> &names, vector<int> &heights) {
  int n = names.size();
  unordered_map<int, string> mapping;

  for (int i = 0; i < n; ++i) {
    mapping[heights[i]] = names[i];
  }

  sort(heights.rbegin(), heights.rend());

  for (int i = 0; i < n; ++i) {
    names[i] = mapping[heights[i]];
  }

  return names;
}