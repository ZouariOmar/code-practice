/**
 * @file    Dice throw.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Dice throw source file
 * @version 0.1
 * @date    2025-05-23
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/dice-throw5349/1 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int noOfWays(int m, int n, int x) {
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(x + 1, 0));
    dp[0][0] = 1;
    for (int dice = 1; dice <= n; ++dice) {
      for (int sum = 1; sum <= x; ++sum) {
        for (int face = 1; face <= m; ++face) {
          if (sum - face >= 0)
            dp[dice][sum] += dp[dice - 1][sum - face];
        }
      }
    }
    return dp[n][x];
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
