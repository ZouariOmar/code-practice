/**
 * @file    main.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   main source file
 * @version 0.1
 * @date    2025-04-20
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/teemo-attacking leetcode @endlink
 */

//? Include prototype declaration part
#include "helper.cpp"

//? Main int function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  Solution sl;
  std::vector<int> arr({1, 4});
  sl.findPoisonedDuration(arr, 2);
  return EXIT_SUCCESS;
}
