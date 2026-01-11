/**
 * @file      2785. Sort Vowels in a String.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     2785. Sort Vowels in a String source file
 * @version   0.1
 * @date      09/11/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/sort-vowels-in-a-string leetcode @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <string>

//? Function(s)/Class(es) prototype dev part
class Solution {
private:
  constexpr static std::string vowels = "aeiouAEIOU";

public:
  std::string sortVowels(std::string s) {
    std::string catched_vowels;
    for (const char &c : s) {
      if (vowels.find(c) != std::string::npos)
        catched_vowels += c;
    }

    if (catched_vowels.empty())
      return s;

    std::sort(catched_vowels.begin(), catched_vowels.end());
    std::string::iterator it = catched_vowels.begin();
    for (char &c : s) {
      if (vowels.find(c) != std::string::npos)
        c = *it++;
    }

    return s;
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
  std::cout << sl.sortVowels("lEetcOde") << std::endl;
  return EXIT_SUCCESS;
}
