/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/longest-common-prefix
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Find the longest common prefix
 * @param strs 
 * @return string 
 */
string Solution::longestCommonPrefix(vector<string>& strs) {
  string result = "";

  for (int i = 1; i < strs.size(); i++) {
    if (strs.empty()) return "";
    for (int i = 0; i < strs[0].size(); i++) {
      char c = strs[0][i];
      for (int j = 1; j < strs.size(); j++) {
        if (i == strs[j].size() || strs[j][i] != c)
          return strs[0].substr(0, i);
      }
    }
    return strs[0];
  }
}