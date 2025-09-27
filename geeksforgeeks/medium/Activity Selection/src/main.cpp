/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-28
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/activity-selection-1587115620/1 GFG @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"  

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  Solution sl;
  std::vector<int> s({1, 3, 0, 5, 8, 5}), f({2, 4, 6, 7, 9, 9});
  std::cout << sl.activitySelection(s, f) << '\n'; 
  return EXIT_SUCCESS;
}