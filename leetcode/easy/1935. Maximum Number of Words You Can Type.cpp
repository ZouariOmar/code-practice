/**
 * @file      1935. Maximum Number of Words You Can Type.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     1935. Maximum Number of Words You Can Type source file
 * @version   0.1
 * @date      15/09/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/maximum-number-of-words-you-can-type leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <sstream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int canBeTypedWords(std::string text, std::string brokenLetters) {
    std::stringstream ss(text);
    std::string word;
    int res{};
    while (ss >> word) {
      ++res;
      for (const char &c : word) {
        if (brokenLetters.find(c) != std::string::npos) {
          --res;
          break;
        }
      }
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
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
