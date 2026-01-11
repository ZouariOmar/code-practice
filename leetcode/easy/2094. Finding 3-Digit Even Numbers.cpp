/**
 * @file    2094. Finding 3-Digit Even Numbers.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   2094. Finding 3-Digit Even Numbers source file
 * @version 0.1
 * @date    2025-05-12
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/finding-3-digit-even-numbers leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  std::vector<int> findEvenNumbers(std::vector<int> &digits) {
    unsigned int freq[10]{};
    for (const int &it : digits)
      freq[it]++;
    std::vector<int> result;
    for (size_t i(1); i < 10; ++i) {
      if (!freq[i])
        continue;
      freq[i]--;
      for (size_t j{}; j < 10; j++) {
        if (!freq[j])
          continue;
        freq[j]--;
        for (size_t k{}; k < 10; k += 2) {
          if (!freq[k])
            continue;
          result.push_back(i * 100 + j * 10 + k);
        }
        freq[j]++;
      }
      freq[i]++;
    }
    return result;
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
