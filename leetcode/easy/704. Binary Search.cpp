/**
 * @file      704. Binary Search.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     filename source file
 * @version   0.1
 * @date      08/03/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/binary-search leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int search(std::vector<int> &nums, int target) {
    int l{}, h(nums.size() - 1);
    while (l <= h) {
      int mid((l + h) / 2);
      if (nums[mid] == target)
        return mid;
      else if (nums[mid] > target)
        h = mid - 1;
      else
        l = mid + 1;
    }
    return -1;
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
