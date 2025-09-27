/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-15
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/elements-in-the-range2834/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  // Declare vars
  Solution sl;
  int arr[] = {1, 4, 5, 2, 7, 8, 3};

  cout << boolalpha << sl.check_elements(arr, 7, 2, 5) << endl;

  return 0;
}