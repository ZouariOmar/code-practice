/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-03
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/adding-spaces-to-a-string leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

// /**
//  * @brief ### Return the modified string after the spaces have been added from vector
//  * @param s {string}
//  * @param arr {vector<int> &}
//  * ! Time Limit Exceeded
//  * @return string
//  */
// string Solution::addSpaces(string s, vector<int> &arr) {
//   size_t index{};
//   for (int &it : arr)
//     s.insert(s.begin() + it + index, ' '), index++;
//   return s;
// }

/**
 * @brief ### Return the modified string after the spaces have been added from vector
 * @param s {string}
 * @param spaces {vector<int> &}
 * @return string
 */
string Solution::addSpaces(string& s, vector<int>& spaces) {
  const int m = spaces.size(), n = s.size();
  string t(n + m, ' ');
  spaces.push_back(n);
  int j{}, i{};
  for (i = 0; i < n; i++) {
    while (i < n && i != spaces[j])
      t[i + j] = s[i], i++;
    if (j < m)
      t[i + j + 1] = s[i], j++;
  }
  return t;
}
