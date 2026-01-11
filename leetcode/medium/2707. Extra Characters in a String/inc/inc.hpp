/*****************************************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      23-09-2024
 * @link      https://leetcode.com/problems/extra-characters-in-a-string
 * @copyright Copyright (c) 2024
 *****************************************************************************/

#ifndef __INC_H__
#define __INC_H__

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------

// Include std libs
#include <limits.h>

#include <iostream>
#include <unordered_map>
#include <vector>

// Use the stander workspace
using namespace std;

//? ------------------------- FUNCTIONS/CLASSES PROTOTYPE DECLARATION PART ------------------------

/**
 * ? Constraints:
 * 1 <= s.length <= 50
 * 1 <= dictionary.length <= 50
 * 1 <= dictionary[i].length <= 50
 * dictionary[i] and s consists of only lowercase English letters
 * dictionary contains distinct words
 */

class Solution {
 private:
  unordered_map<string, int> um;  // Dictionary words
  unordered_map<int, int> memo;   // Memoization map for storing dp results

  int solve(string &, int);

 public:
  int minExtraChar(string, vector<string> &);
};

#endif