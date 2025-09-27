/**
 * @file      Split array in three equal sum subarrays.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Split array in three equal sum subarrays source file
 * @version   0.1
 * @date      25/09/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/array-bonus-problems/problem/split-array-in-three-equal-sum-subarrays geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  // Function to determine if array arr can be split into three equal sum sets.

  std::vector<int> findSplit(std::vector<int> &arr) {
    unsigned int sum{};
    for (const int &it : arr)
      sum += it;

    if (sum % 3)
      return {-1, -1};

    sum /= 3;
    std::vector<int> res;
    unsigned int curr{};
    for (size_t i{}, n(arr.size()); i < n; ++i) {
      curr += arr[i];
      if (curr == sum) {
        curr = 0;
        res.push_back(i);
        if (res.size() == 2 && i < arr.size() - 1)
          return res;
      }
    }
    return {-1, -1};
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
