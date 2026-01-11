/**
 * @file      3541. Find Most Frequent Vowel and Consonant.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     3541. Find Most Frequent Vowel and Consonant source file
 * @version   0.1
 * @date      09/13/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/find-most-frequent-vowel-and-consonant leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int maxFreqSum(std::string s) {
    int freq[26]({});
    for (const char &c : s)
      ++freq[c - 'a'];
    int maxC{}, maxV{};
    for (unsigned short i{}; i < 26; ++i) {
      const char c('a' + i);
      (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? maxV = std::max(maxV, freq[i])
                                                                 : maxC = std::max(maxC, freq[i]);
    }
    return maxC + maxV;
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
