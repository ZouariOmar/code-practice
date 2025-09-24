/**
 * @file      Number of times graph cuts X-axis.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Number of times graph cuts X-axis source file
 * @version   0.1
 * @date      22/09/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/prefix-sum-bonus-problem/problem/number-of-times-graph-cuts-x-axis geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int touchedXaxis(std::vector<int> &arr) {
    int ans{}, curr{};
    for (const int &it : arr) {
      ans += (curr > 0 && curr + it <= 0) || (curr < 0 && curr + it >= 0);
      curr += it;
    }
    return ans;
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
