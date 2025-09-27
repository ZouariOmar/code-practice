/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      21-08-2024
 * @link      https://www.geeksforgeeks.org/problems/absolute-difference-11156/1?page=1&sortBy=difficulty
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_HPP__
#define __INC_HPP__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <iostream>
#include <vector>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

/**
 * ? Constraints:
 * *
 * - 1 <= arr.size() <= 106
 * *
 * - 1 <= k, arr[i] <= 106
 */

class Solution {
 private:
  bool is_adjacent(int);

 public:
  vector<int> getDigitDiff1AndLessK(vector<int> &, int);
};

#endif