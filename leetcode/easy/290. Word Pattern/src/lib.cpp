/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-30
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/word-pattern leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find if `s` follows the same pattern
 * @param pattern {string}
 * @param s {string}
 * @return true | false
 */
bool Solution::wordPattern(string pattern, string s) {
  stringstream ss(s);
  unordered_map<char, string> charToWord;
  unordered_map<string, char> wordToChar;
  vector<string> words;
  string word;

  // Split `s` into words and store them in a vector
  while (ss >> word)
    words.push_back(word);

  // If the pattern length doesn't match the number of words, return false
  if (pattern.size() != words.size()) return false;

  // Iterate through the pattern and the words simultaneously
  for (int i = 0; i < pattern.size(); ++i) {
    char c = pattern[i];
    const string &w = words[i];

    // Check for pattern -> word mapping
    if (charToWord.count(c) && charToWord[c] != w) return false;

    // Check for word -> pattern mapping
    if (wordToChar.count(w) && wordToChar[w] != c) return false;

    // Establish the mapping
    charToWord[c] = w;
    wordToChar[w] = c;
  }

  return true;
}