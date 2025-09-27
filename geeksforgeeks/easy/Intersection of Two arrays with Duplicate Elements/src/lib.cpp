/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-28
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/intersection-of-two-arrays-with-duplicate-elements/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the intersection of the two arrays
 * @param a {vector<int> &}
 * @param b {vector<int> &}
 * @return vector<int>
 */
vector<int> Solution::intersectionWithDuplicates(vector<int> &a, vector<int> &b) {
  unordered_set<int> st(a.begin(), a.end());
  vector<int> res;
  for (int &val : b) {
    if (st.empty())
      break;
    if (st.find(val) != st.end())
      res.push_back(val), st.erase(val);
  }
  return res;
}