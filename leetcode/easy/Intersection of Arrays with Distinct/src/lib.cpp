/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-04
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/intersection-of-two-arrays2404 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"  

//? Function(s)/Class(es) prototype dev part

/**
 * @fn      Solution::numberofElementsInIntersection(std::vector<int> &, std::vector<int> &)
 * @brief   Return the count of elements in the intersection (or common elements) of the two arrays.
 * @param a {std::vector<int> &}
 * @param b {std::vector<int> &}
 * @return  int
 */
int Solution::numberofElementsInIntersection(std::vector<int> &a, std::vector<int> &b) {
  std::unordered_set<int> st(a.begin(), a.end());
  int original_length = st.size();
  for (const int &it : b)
    st.insert(it);
  return b.size() - (st.size() - original_length);
}