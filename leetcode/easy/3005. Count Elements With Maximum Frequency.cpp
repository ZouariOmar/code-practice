/**
 * @file      3005. Count Elements With Maximum Frequency.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     3005. Count Elements With Maximum Frequency source file
 * @version   0.1
 * @date      09/22/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/count-elements-with-maximum-frequency leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int maxFrequencyElements(std::vector<int> &nums) {
    unsigned short *freq(new unsigned short[100]{});
    for (const int &it : nums)
      ++freq[it - 1];
    int ans{};
    unsigned short max_freq{};
    for (size_t i{}; i < 100; ++i) {
      unsigned short it(freq[i]);
      if (it == max_freq)
        ans += it;
      else if (it > max_freq) {
        ans = it;
        max_freq = it;
      }
    }
    delete[] freq;
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
