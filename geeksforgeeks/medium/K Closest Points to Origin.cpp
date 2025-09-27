/**
 * @file      K Closest Points to Origin.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     K Closest Points to Origin source file
 * @version   0.1
 * @date      08/25/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/heap-gfg-160/problem/k-closest-points-to-origin--172242 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>> &points, int k) {
    std::sort(points.begin(), points.end(), [](const std::vector<int> &x, const std::vector<int> &y) -> bool {
      return x[0] * x[0] + x[1] * x[1] < y[0] * y[0] + y[1] * y[1];
    });
    return std::vector<std::vector<int>>(points.begin(), points.begin() + k);
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
