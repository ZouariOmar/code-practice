/**
 * @file      744. Find Smallest Letter Greater Than Target.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     744. Find Smallest Letter Greater Than Target source file
 * @version   0.1
 * @date      09/09/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/find-smallest-letter-greater-than-target leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  char nextGreatestLetter(std::vector<char> &letters, char target) {
    size_t n(letters.size());
    int s{};
    char ans(letters[0]);
    int e(n - 1);
    while (s <= e) {
      int m = (s + e) / 2;
      if (letters[m] > target) {
        ans = letters[m];
        e = m - 1;
      } else {
        s = m + 1;
      }
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
