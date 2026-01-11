/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      18-09-2024
 * @link      https://leetcode.com/problems/largest-number
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.
 * @param nums vector<int>
 * @return string
 */
string Solution::largestNumber(vector<int> &nums) {
  sort(nums.begin(), nums.end(), [](int a, int b) {
    string sa{to_string(a)}, sb{to_string(b)};
    return ((sa + sb) > (sb + sa));
  });

  if (!nums[0]) return "0";

  string res{""};
  for (int it : nums)
    res += to_string(it);

  return res;
}

/*
* Other Solution
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for (int num : nums) {
            v.push_back(to_string(num));
        }

        // Sort using a custom comparator
        sort(v.begin(), v.end(), [](string &a, string &b) {
            return a + b > b + a;
        });

        // Edge case: if the largest number is "0"
        if (v[0] == "0") return "0";

        string result;
        for (string &s : v) {
            result += s;
        }

        return result;
    }
};
*/