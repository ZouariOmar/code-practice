/**
 * @file    LCS of three strings.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   LCS of three strings source file
 * @version 0.1
 * @date    2025-06-04
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/lcs-of-three-strings0028/1 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int lcsOf3(std::string &s1, std::string &s2, std::string &s3) {
    int m = s1.length();
    int n = s2.length();
    int o = s3.length();

    // Create a 3D DP table to store LCS lengths
    vector<vector<vector<int>>> dp(m + 1, vector<vector<int>>(n + 1, vector<int>(o + 1, 0)));

    for (int i = 1; i <= m; i++) {
      for (int j = 1; j <= n; j++) {
        for (int k = 1; k <= o; k++) {
          if (s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1])
            dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
          else
            dp[i][j][k] = std::max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
        }
      }
    }

    return dp[m][n][o];
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
