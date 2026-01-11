/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-31
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/reverse-vowels-of-a-string leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Reverse only all the vowels in the string and return it.
 * @details The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.
 * @param s string
 * @return string
 */
string Solution::reverseVowels(string s) {
  // Convert the input string to a character array.
  string word = s;
  int start{}, end = s.length() - 1;
  string vowels = "aeiouAEIOU";

  // Loop until the start pointer is no longer less than the end pointer.
  while (start < end) {
    // Move the start pointer towards the end until it points to a vowel.
    while (start < end && vowels.find(word[start]) == string::npos)
      start++;

    // Move the end pointer towards the start until it points to a vowel.
    while (start < end && vowels.find(word[end]) == string::npos)
      end--;

    // Swap the vowels found at the start and end positions.
    swap(word[start], word[end]);

    // Move the pointers towards each other for the next iteration.
    start++, end--;
  }

  // Return the modified string.
  return word;
}