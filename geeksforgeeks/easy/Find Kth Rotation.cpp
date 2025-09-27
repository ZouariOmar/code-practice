/**
 * @file    Find Kth Rotation.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Find Kth Rotation source file
 * @version 0.1
 * @date    2025-06-07
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/rotation4723/1?page=3&difficulty=Easy&sortBy=submissions geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <cstddef>
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int findKRotation(std::vector<int> &arr) {
    size_t len(arr.size());
    unsigned result{};
    for (size_t i{}; i < len - 1; i++) {
      if (arr[i] > arr[i + 1])
        return i + 1;
    }
    return 0; // No rotate action
  }
}; // Solution class

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::vector<int> arr({16, 18, 22, 23, 24, 36, 43, 1, 2});
  Solution sl;
  std::cout << sl.findKRotation(arr) << '\n';
  return EXIT_SUCCESS;
}
