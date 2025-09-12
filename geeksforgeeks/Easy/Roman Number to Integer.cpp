/**
 * @file      Roman Number to Integer.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Roman Number to Integer source file
 * @version   0.1
 * @date      08/29/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/hashing-bonus-problem/problem/roman-number-to-integer3201 GFG160 @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <unordered_map>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int romanToDecimal(std::string s) {
    std::unordered_map<char, int> romanMap = {{'I', 1},
                                              {'V', 5},
                                              {'X', 10},
                                              {'L', 50},
                                              {'C', 100},
                                              {'D', 500},
                                              {'M', 1000}};
    unsigned int res{};
    for (size_t i{}; i < s.length(); ++i) {
      if (i + 1 < s.length() && romanMap[s[i]] < romanMap[s[i + 1]])
        res += romanMap[s[i + 1]] - romanMap[s[i]], ++i;
      else
        res += romanMap[s[i]];
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
  Solution sl;

  std::cout << sl.romanToDecimal("XL") << std::endl;
  return EXIT_SUCCESS;
}
