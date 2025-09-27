/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-01
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/print-anagrams-together/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.
 * @details Note: The final output will be in lexicographic order.
 * @param arr {vector<string> &}
 * @return vector<vector<string>>
 */
vector<vector<string>> Solution::anagrams(vector<string> &arr) {
  vector<vector<string>> res;
  map<string, vector<string>> mp;
  for (string &str : arr) {
    string sorted_str{str};
    sort(sorted_str.begin(), sorted_str.end());
    mp[sorted_str].push_back(str);
  }

  // Push the result `mp` vectors to the result vector `res`
  for (auto &it : mp)
    res.push_back(it.second);

  return res;
}