/**
 * @file      2438. Range Product Queries of Powers.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     filename source file
 * @version   0.1
 * @date      11/08/2025
 * @copyright Copyright (c) 2025
 * @link      https://github.com/ZouariOmar ZouariOmar @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>
using std::vector;

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  vector<int> productQueries(int n, vector<vector<int>> &queries) {
    vector<int> p2, res;
    int i = 0, k = 0;
    while (n) {
      if (n & 1) {
        p2.push_back(i);
        if (k)
          p2[k] += p2[k - 1]; // prefix sum of exponents
        k++;
      }
      n >>= 1;
      i++;
    }

    for (auto &q : queries) {
      int p = p2[q[1]] - (q[0] ? p2[q[0] - 1] : 0);
      res.push_back(fastPow(2, p));
    }
    return res;
  }

private:
  const int mod = 1e9 + 7;

  int fastPow(int base, int exp) {
    int res = 1;
    while (exp) {
      if (exp & 1)
        res = (1LL * res * base) % mod;
      base = (1LL * base * base) % mod;
      exp >>= 1;
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
