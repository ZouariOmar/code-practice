/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-10
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1 GFG @endlink
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
  string str{"geeksforgeeks"};
  cout << sl.longestUniqueSubstr(str) << endl;
  return 0;
}