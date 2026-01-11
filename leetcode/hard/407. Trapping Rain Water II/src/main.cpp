/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-19
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/trapping-rain-water-ii leetcode @endlink
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
  vector<vector<int>> arr = {
      {1, 4, 3, 1, 3, 2},
      {3, 2, 1, 3, 2, 4},
      {2, 3, 3, 2, 3, 1}};
  cout << sl.trapRainWater(arr) << endl;
  return 0;
}