/**
 * @file    504. Base 7.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   504. Base 7 source file
 * @version 0.1
 * @date    2025-05-02
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/base-7 leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  std::string convertToBase7(int num) {
    if (num == 0)
      return "0";
    std::string ans(""), sign("");
    if (num < 0)
      sign = '-';
    num = abs(num);
    while (num)
      ans = (char)((num % 7) + 48) + ans, num /= 7;
    return sign + ans;
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
