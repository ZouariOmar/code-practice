/**
 * @file      1925. Count Square Sum Triples.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     1925. Count Square Sum Triples source file
 * @version   0.1
 * @date      2025-12-08
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/count-square-sum-triples leetcode @endlink
 */

//? Include prototype declaration part
#include <cmath>
#include <iostream>
#include <numeric>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int countTriples(int n) {
    int res = 0;
    for (int u = 2; u <= sqrt(n); u++) {
      for (int v = 1; v < u; v++) {
        if (~(u - v) & 1 || std::gcd(u, v) != 1)
          continue;
        int c = u * u + v * v;
        if (c > n)
          continue;
        res += (n / c) << 1;
      }
    }
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
