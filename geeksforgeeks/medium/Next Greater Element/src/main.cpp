/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-22
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1 GFG @endlink
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
  vector<int> arr({1, 3, 2, 4});
  arr = sl.nextLargerElement(arr);

  for (const int &it : arr)
    cout << it << " ";

  return EXIT_SUCCESS;
}