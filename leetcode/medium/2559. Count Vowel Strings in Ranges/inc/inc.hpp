/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-02
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/count-vowel-strings-in-ranges leetcode @endlink
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
  const string vowels = "aeiou";

public:
  vector<int> vowelStrings(vector<string> &, vector<vector<int>> &);
}; // Solution class
#endif // __INC_HPP__