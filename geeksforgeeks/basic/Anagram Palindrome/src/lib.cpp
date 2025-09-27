/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-16
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/anagram-palindrome4720/1?page=7&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Check if characters of the given string can be rearranged to form a palindrome.
 *
 * @param s std::string
 * @return  int
 */
  int isPossible(std::string s) {
    std::unordered_map<char, int> ump;
    for (const char &c : s)
      ump[c]++;
    u_int odds{};
    for (std::pair<char, int> element : ump)
      if (element.second & 1)
        odds++;
    return odds < 2;
  }