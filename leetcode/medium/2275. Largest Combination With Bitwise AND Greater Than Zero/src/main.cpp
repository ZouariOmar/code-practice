/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-07
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero leecode @endlink
 */

//? Include prototype declaration part
#include "lib.cpp" 

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  // declare vars/objs
  vector<int> arr({16, 17, 71, 62, 12, 24, 14});
  Solution sl;

  cout << (16 & 12) << endl;
  cout << sl.largestCombination(arr) << endl;

  return 0;
}