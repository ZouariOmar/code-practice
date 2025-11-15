/**
 * @file      Sum of alternate product.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Sum of alternate product source file
 * @version   0.1
 * @date      2025-11-07
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/problems/minimize-sum-of-alternate-product2033/1?page=2&sortBy=difficulty geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int altProduct(std::vector<int> &arr) {
    std::sort(arr.begin(), arr.end());
    int res{};
    for (size_t i{}, t(arr.size()); i < t / 2; ++i)
      res += arr[i] * arr[t - i - 1];
    return res;
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
