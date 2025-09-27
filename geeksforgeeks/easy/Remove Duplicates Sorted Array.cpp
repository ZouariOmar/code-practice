/**
 * @file    Remove Duplicates Sorted Array.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Remove Duplicates Sorted Array source file
 * @version 0.1
 * @date    2025-05-29
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int removeDuplicates(std::vector<int> &arr) {
    arr.erase(std::unique(arr.begin(), arr.end()), arr.end());
    return arr.size();
  }
}; // Solution class
//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
