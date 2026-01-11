/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-09
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/counting-words-with-a-given-prefix leetcode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
private:
  bool isPrefix(const string &, const string &);

public:
  int prefixCount(vector<string> &, string);
}; // Solution class

#endif // __INC_HPP__