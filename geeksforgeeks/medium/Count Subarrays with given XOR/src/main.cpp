/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-03
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1 GFG @endlink
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
  vector<int> arr({4, 2, 2, 6, 4});
  cout << sl.subarrayXor(arr, 6) << endl;

  return 0;
}