/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-03
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/number-of-ways-to-split-array leetcode @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  // Declare vars/objs
  Solution sl;
  vector<int> arr({2, 3, 1, 0});
  cout << sl.waysToSplitArray(arr) << endl;

  return 0;
}