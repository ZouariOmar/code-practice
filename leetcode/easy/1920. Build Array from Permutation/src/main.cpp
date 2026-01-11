/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-12-25
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/build-array-from-permutation @endlink
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
  vector<int> arr({0, 2, 1, 5, 3, 4});

  arr = sl.buildArray(arr);

  for (int &it: arr)
    cout << it << " ";

  cout << endl;
  return 0;
}