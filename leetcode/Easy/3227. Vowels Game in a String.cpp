/**
 * @file      3227. Vowels Game in a String.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     3227. Vowels Game in a String source file
 * @version   0.1
 * @date      09/12/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/vowels-game-in-a-string leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  bool doesAliceWin(std::string s) {
    unsigned int vowels_nbr{}, last_vowel(-1);
    for (const char &c : s) {
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    }
    return false;
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
