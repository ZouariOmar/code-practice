/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-10
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-with-distinct-elements/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Function to return a list containing the union of the two arrays.
 * @param a vector<int> &
 * @param b vector<int> &
 * @return vector<int>
 */
vector<int> Solution::findUnion(vector<int> &a, vector<int> &b) {
  set<int> st(a.begin(), a.end());        // Insert `a` in `st` set
  for (int &it : b) st.insert(it);        // Insert `b` in `st` set
  vector<int> res(st.begin(), st.end());  // Insert the `st` in `res` vector
  return res;                             // Return the result
}