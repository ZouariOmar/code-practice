/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-05
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/shifting-letters-ii leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

// /**
//  * @brief ### Shifting a character forward or backward
//  * @param c {char &}
//  * @param direction int
//  */
// void Solution::shift(char &c, int direction) {
//   c += direction;
//   if (c > 'z')
//     c = 'a';
//   else if (c < 'a')
//     c = 'z';
// }

// /**
//  * @brief ### Return the final string after all such shifts to s are applied.
//  * ! Time Limit Exceeded
//  * @param s string
//  * @param shifts {vector<vector<int>> &}
//  * @return string
//  */
// string Solution::shiftingLetters(string s, vector<vector<int>> &shifts) {
//   for (vector<int> &sh : shifts)
//     for (int i{sh[0]}; i <= sh[1]; ++i)
//       shift(s[i], (sh[2] == 1) ? 1 : -1);
//   return s;
// }

string Solution::shiftingLetters(string s, vector<vector<int>> &shifts) {
  int n = s.size();
  vector<int> shift(n + 1, 0);

  // Process the shifts
  for (vector<int> &shiftOp : shifts) {
    int start = shiftOp[0], end = shiftOp[1], direction = shiftOp[2];
    shift[start] += (direction == 1 ? 1 : -1);
    shift[end + 1] -= (direction == 1 ? 1 : -1);
  }

  int currentShift = 0;
  for (int i = 0; i < n; ++i) {
    currentShift += shift[i];
    shift[i] = currentShift;
  }

  for (int i = 0; i < n; ++i) {
    int netShift = (shift[i] % 26 + 26) % 26;
    s[i] = 'a' + (s[i] - 'a' + netShift) % 26;
  }

  return s;
}