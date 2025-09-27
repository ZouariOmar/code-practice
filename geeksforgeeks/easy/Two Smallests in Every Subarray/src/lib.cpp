//! Lance the Doxygen file comment Her (in VSC - `/** */`)

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### find and return the maximum sum of the smallest and second smallest element
 * among all possible subarrays of size greater than one.
 * If it is not possible, then return -1.
 * @param arr {vector<int> &}
 * @return int
 */
int Solution::pairWithMaxSum(vector<int> &arr) {
  size_t n{arr.size()};
  if (n < 2) return -1;  // If the length of the vector in strictly less than 2 ==> return none_valid_code

  size_t i{}, j{1};
  int sum{};
  while (j < n) {
    sum = max(sum, arr[i] + arr[j]);
    i++, j++;
  }

  return sum;
}