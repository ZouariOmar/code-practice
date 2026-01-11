/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-07-10
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/crawler-log-folder
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Return the minimum number of operations needed to go back to the main folder after the change folder operations.
 * @param logs
 * @return int
 */
int Solution::minOperations(vector<string> &logs) {
  int ans = 0;
  for (string it : logs) {
    if (it == "./" || (it == "../" && ans == 0))
      continue;
    else if (it == "../")
      ans--;
    else
      ans++;
  }

  return ans;
}