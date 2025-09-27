/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-30
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?page=2&difficulty=Easy&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @fn         main(int, const char **)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  Solution sl;
  std::vector<int> arr({1, 2, 0, 4, 3, 0, 5, 0});
  sl.pushZerosToEnd(arr);
  for (const int &it : arr)
    std::cout << it << " ";
  return EXIT_SUCCESS;
}