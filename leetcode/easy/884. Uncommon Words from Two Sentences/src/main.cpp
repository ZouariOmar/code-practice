/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      17-09-2024
 * @link      https://leetcode.com/problems/uncommon-words-from-two-sentences
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief # The Main Program Function
 * @return int 
 */
int main() {
  boost();
  //* principal vars declaration part
  string s1 = "apple apple", s2 = "banana";
  Solution sl;

  vector<string> res = sl.uncommonFromSentences(s1, s2);

  
  for (string s : res)
    cout << s << " ";

  return 0;
}