/**
 * @file      3432. Count Partitions with Even Sum Difference.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     3432. Count Partitions with Even Sum Difference source file
 * @version   0.1
 * @date      2025-12-05
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/count-partitions-with-even-sum-difference leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <numeric>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int countPartitions(std::vector<int> &nums) {
    unsigned int total = std::accumulate(nums.begin(), nums.end(), 0);
    return total & 1 ? 0 : nums.size() - 1;
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
