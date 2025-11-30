/**
 * @file      A. Forbidden Integer.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     A. Forbidden Integer source file
 * @version   0.1
 * @date      2025-11-30
 * @copyright Copyright (c) 2025
 * @link      https://codeforces.com/problemset/problem/1845/A codeforces @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  static void solve() {
    unsigned short n, k, x; // 1 ≤ x ≤ k ≤ n ≤ 100
    std::cin >> n >> k >> x;

    if (k == 1) {
      std::cout << "NO\n";
      return;
    }
    if (x != 1) {
      std::cout << "YES\n";
      std::cout << n << std::endl;
      for (int i{}; i < n; ++i)
        std::cout << 1 << " ";
      std::cout << std::endl;
    } else {
      if (n % 2 == 0) {
        int num = n / 2;
        std::cout << "YES" << std::endl;
        std::cout << num << std::endl;
        for (int i{}; i < num; ++i)
          std::cout << 2 << " ";
        std::cout << std::endl;
      } else {
        if (k >= 3) {
          std::cout << "YES" << std::endl;
          int num = (n - 3) / 2;
          std::cout << num + 1 << std::endl;
          std::cout << 3 << " ";
          for (int i{}; i < num; ++i)
            std::cout << 2 << " ";
          std::cout << std::endl;
        } else
          std::cout << "NO" << std::endl;
      }
    }
  }
}; // Solution class

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  unsigned short t;
  std::cin >> t;
  while (t--)
    Solution::solve();
  return EXIT_SUCCESS;
}
