/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-05
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/sum-of-all-subset-xor-totals leetcode @endlink
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
  std::vector<int> arr({1, 3});
  std::cout << sl.subsetXORSum(arr) << '\n';
  return EXIT_SUCCESS;
}