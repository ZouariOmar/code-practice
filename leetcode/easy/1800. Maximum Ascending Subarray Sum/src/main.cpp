/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-04
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-ascending-subarray-sum leetcode @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  // Declare vars/objs
  Solution sl;
  vector<int> arr({10, 20, 30, 5, 10, 50});
  cout << sl.maxAscendingSum(arr) << endl;
  return EXIT_SUCCESS;
}