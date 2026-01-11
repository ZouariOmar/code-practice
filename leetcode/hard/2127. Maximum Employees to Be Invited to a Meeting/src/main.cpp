/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-26
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-employees-to-be-invited-to-a-meeting leetcode @endlink
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
  vector<int> arr({1, 2, 0});
  cout << sl.maximumInvitations(arr) << endl;
  return 0;
}