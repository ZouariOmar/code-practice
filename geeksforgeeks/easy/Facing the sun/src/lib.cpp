/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      20-09-2024
 * @link      https://www.geeksforgeeks.org/problems/facing-the-sun2126/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Returns count buildings that can see sunlight
 * *
 * ? Constraints:
 * *
 * - 1 ≤ height.size() ≤ 10^6
 * *
 * - 1 ≤ heighti ≤ 10^8
 * @param height vector<int>
 * @return int
 */
int Solution::countBuildings(vector<int> &height) {
  int res{1};
  int _max{height[0]};

  for (int it : height)
    if (it > _max) {
      _max = it;
      res++;
    }

  return res;
}