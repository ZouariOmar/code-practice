/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-17
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/maximum-swap leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

// /**
//  * @brief ### Return the maximum valued number you can get.
//  * @details I can swap two digits at most once to get the maximum valued number.
//  * ! failed in test 68
//  * @param num int
//  * @return int
//  */
// int Solution::maximumSwap(int num) {
//   string str = to_string(num);
//   char bigNumber = '9';
//   size_t len{str.size()};
//   for (size_t i{}; i < len; i++) {
//     if (str[i] != bigNumber) {
//       char C = str[i];
//       string::iterator it = find_if(str.begin() + i, str.end(), [C](char &c) { return c > C; });
//       if (it != str.end()) {  // Swap and return the result
//         swap(*it, str[i]);
//         return stoi(str);
//       } else
//         bigNumber = str[i];
//     }
//   }

//   return num;
// }

/**
 * @brief ### Return the maximum valued number you can get.
 * @details I can swap two digits at most once to get the maximum valued number.
 * @param num int
 * @return int
 */
int Solution::maximumSwap(int num) {
  // Convert the number to a string for easier digit manipulation
  string numStr{to_string(num)};
  size_t n{numStr.size()};

  // Store the last occurrence of each digit (0-9)
  vector<int> last(10, -1);
  for (int i = 0; i < n; ++i)
    last[numStr[i] - '0'] = i;

  // Traverse each digit from left to right
  for (int i = 0; i < n; ++i) {
    for (int d = 9; d > numStr[i] - '0'; --d)  // Check if there's a larger digit appearing later
      if (last[d] > i) {
        swap(numStr[i], numStr[last[d]]);  // Swap the current digit with the larger one
        return stoi(numStr);               // Convert back to integer and return
      }
  }

  // If no swap was made, return the original number
  return num;
}