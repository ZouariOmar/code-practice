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
 * @brief ### Return the length of the last word in the string.
 * @param s
 * @return int
 */
int Solution::lengthOfLastWord(string s) {
  stringstream S(s);
  string lastWord;
  while (S >> lastWord);
  return lastWord.size();
}

/*
* Other solution
class Solution {
public:
  int lengthOfLastWord(string s) {
    int length = 0;
    int it = s.length() - 1;

    while (it >= 0){
        if (s[it] == ' ') it--;
        else break;
    }

    while (it >= 0){
        if (s[it] != ' '){
            length++;
            it--;
        }
        else break;
    }

    return length;
  }
};
*/