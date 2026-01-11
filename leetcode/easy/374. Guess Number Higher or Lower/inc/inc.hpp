/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-31
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/guess-number-higher-or-lower leetcode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
private:
  int guess(int num) {
    if (num == 6)
      return 0;
    else if (num > 6)
      return -1;
    return 1;
  }

public:
  int guessNumber(int);
}; // Solution class

#endif // __INC_HPP__