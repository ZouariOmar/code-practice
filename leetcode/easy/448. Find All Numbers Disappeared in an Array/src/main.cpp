/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-26
 * @copyright Copyright (c) 2025
 * @link https://www.youtube.com/watch?v=29xxTiH7PH4 leetcode @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  std::vector<int> arr({4, 3, 2, 7, 8, 2, 3, 1});
  Solution sl;
  arr = sl.findDisappearedNumbers(arr);
  for (const int &it : arr)
    std::cout << it << " ";
  std::cout << '\n';
  return EXIT_SUCCESS;
}