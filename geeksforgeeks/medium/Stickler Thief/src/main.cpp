/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-20
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/stickler-theif-1587115621/1 GFG @endlink
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
  std::vector<int> arr({4, 4, 4, 4});
  std::cout << sl.findMaxSum(arr) << std::endl;
  return EXIT_SUCCESS;
}