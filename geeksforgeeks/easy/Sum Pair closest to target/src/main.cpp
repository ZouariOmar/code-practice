/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-06
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/pair-in-array-whose-sum-is-closest-to-x1124/1 GFG @endlink
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
  vector<int> arr({10, 30, 20, 5});
  arr = sl.sumClosest(arr, 25);
  cout << arr[0] << " " << arr[1] << endl;
  return 0;
}