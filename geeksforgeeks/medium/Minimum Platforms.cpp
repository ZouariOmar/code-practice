/**
 * @file      Minimum Platforms.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Minimum Platforms source file
 * @version   0.1
 * @date      09/10/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/greedy-gfg-160/problem/minimum-platforms-1587115620 geeksforgeeks @endlink
 */
//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int minPlatform(std::vector<int> &arr, std::vector<int> &dep) {
    size_t n(arr.size());
    unsigned int res{};

    int maxDep = dep[0];
    for (size_t i(1); i < n; ++i)
      maxDep = std::max(maxDep, dep[i]);

    std::vector<int> v(maxDep + 2, 0);
    for (int i = 0; i < n; i++)
      ++v[arr[i]], --v[dep[i] + 1];

    unsigned int count{};
    for (size_t i{}; i <= maxDep + 1; ++i) {
      count += v[i];
      res = std::max(res, count);
    }

    return res;
  }
};

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
