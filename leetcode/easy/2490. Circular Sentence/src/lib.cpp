/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-02
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/circular-sentence leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Given a string sentence, return true if it is circular. Otherwise, return false.
 * @details #### A sentence is circular if:
 * *
 * - #### The last character of a word is equal to the first character of the next word - @cond condition_02 @endcond
 * *
 * - #### The last character of the last word is equal to the first character of the first word - @cond condition_01 @endcond
 * @param sentence string
 * @return true or false
 */
bool Solution::isCircularSentence(string sentence) {
  size_t n{sentence.size()};  // Get the length of the sentence
  if (sentence[0] != sentence[n - 1]) return false;  // Condition_01
  for (int i = 1; i < n - 1; i++) // Condition_02
    if (sentence[i] == ' ') 
      if (sentence[i - 1] != sentence[i + 1]) return false;
  return true;  // The sentence is circular
}