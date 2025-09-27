/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      01-09-2024
 * @link      https://www.geeksforgeeks.org/problems/repeated-ids0116/1?page=1&sortBy=difficulty
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Get rid of the repeated IDs.
 * @return vector<int>
 */
vector<int> Solution::uniqueId(vector<int> &arr) {
  unordered_set<int> seen;
  vector<int> res;

  for (int it : arr)
    if (seen.find(it) == seen.end()) {
      seen.insert(it);
      res.push_back(it);
    }

  return res;
}