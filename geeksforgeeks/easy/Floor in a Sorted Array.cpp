/**
 * @file    Floor in a Sorted Array.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Floor in a Sorted Array source file
 * @version 0.1
 * @date    2025-05-10
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int findFloor(std::vector<int> &arr, int x) {
    int l{}, h = arr.size() - 1, floor(-1);
    while (l <= h) {
      int mid((l + h) / 2);
      if (arr[mid] <= x)
        floor = mid, l = mid + 1;
      else
        h = mid - 1;
    }
    return floor;
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
