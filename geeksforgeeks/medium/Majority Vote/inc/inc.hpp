/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-03
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/majority-vote/1 GFG @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <map>
#include <vector>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part

/**
 * ? Constraint:
 * 1 <= nums.size() <= 106
 * 0 <= nums[i] <= 109
 * ! Note: The answer should be returned in an increasing format.
 */

class Solution {
 public:
  vector<int> findMajority(vector<int> &);
};  // Solution class

#endif