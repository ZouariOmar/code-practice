/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      dd-mm-yyyy
 * @link      NONE
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Function to reverse words in a given string
 * * Time Taken: 0.03
 * @param str string
 * @return string
 */
string Solution::reverseWords(string str) {
  vector<string> words;
  stringstream ss(str);
  string word;

  // Split the string by dots and store words in a vector
  while (std::getline(ss, word, '.'))
    words.push_back(word);

  // Reverse the order of words using std::reverse
  reverse(words.begin(), words.end());

  // Join the reversed words with dots
  string result;
  for (size_t i = 0; i < words.size(); ++i) {
    result += words[i];
    if (i < words.size() - 1)
      result += '.';
  }

  return result;
}