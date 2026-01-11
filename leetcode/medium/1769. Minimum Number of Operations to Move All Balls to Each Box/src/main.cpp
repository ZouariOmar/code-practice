/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-06
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box leetcode @endlink
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
  vector<int> arr = sl.minOperations("001011");
  for (int &it : arr)
    cout << it << " ";
  cout << endl;
  return 0;
}