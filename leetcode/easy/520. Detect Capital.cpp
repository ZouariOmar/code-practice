/**
 * @file    520. Detect Capital.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   520. Detect Capital source file
 * @version 0.1
 * @date    2025-05-10
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/detect-capital leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <string>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  bool detectCapitalUse(std::string word) {
    unsigned short flag{};
    for (const char &c : word)
      if (std::isupper(c))
        flag++;
    return (flag == word.length()) || (flag == 1 && std::isupper(word[0])) || (!flag);
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
