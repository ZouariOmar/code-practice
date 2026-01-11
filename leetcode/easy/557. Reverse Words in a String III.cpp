/**
 * @file    557. Reverse Words in a String III.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   557. Reverse Words in a String III source file
 * @version 0.1
 * @date    2025-05-29
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/reverse-words-in-a-string-iii leetcode @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <sstream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  std::string reverseWords(std::string s) {
    std::stringstream ss(s);
    std::string holder;
    s.erase();
    while (ss >> holder)
      std::reverse(holder.begin(), holder.end()), s += holder + ' ';
    s.erase(s.length() - 1);
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
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
