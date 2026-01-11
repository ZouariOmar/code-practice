/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-02
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the index of the word in sentence (1-indexed) where searchWord is a prefix of this word.
 * If searchWord is a prefix of more than one word, return the index of the first word (minimum index).
 * If there is no such word return -1.
 * *
 * @param sentence string
 * @param searchWord string
 * @return int
 */
int Solution::isPrefixOfWord(string sentence, string searchWord) {
  istringstream s(sentence);
  string word;
  int index{1};
  while (s >> word) {
    if (!word.find(searchWord))
      return index;
    index++;
  }
  return -1;
}
