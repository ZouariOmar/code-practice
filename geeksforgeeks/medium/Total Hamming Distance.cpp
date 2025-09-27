/**
 * @file      Total Hamming Distance.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Total Hamming Distance source file
 * @version   0.1
 * @date      08/11/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/bit-manipulation-bonus-problems/problem/total-hamming-distance geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>
using std::vector;

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int totHammingDist(vector<int> &arr) {
    int res = 0, n = arr.size();
    for (int bit{}; bit < 32; ++bit) {
      int countOnes = 0;
      for (int &num : arr) {
        if (num & (1 << bit))
          countOnes++;
      }
      res += countOnes * (n - countOnes);
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
