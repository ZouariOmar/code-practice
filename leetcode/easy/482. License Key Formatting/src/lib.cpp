/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-07
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/license-key-formatting leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

/**
 * @fn Solution::licenseKeyFormatting(std::string, int)
 *
 * @brief Return the reformatted license key.
 *
 * @param s std::string
 * @param k int
 *
 * @return std::string
 */
std::string Solution::licenseKeyFormatting(std::string s, int k) {
  std::string res;
  for (auto i = s.rbegin(); i < s.rend(); i++)
    if (*i != '-') { // ignore '-' in original string
      if (res.size() % (k + 1) == k)
        res += '-'; // every (K+1)th char is '-' from tail
      res += toupper(*i);
    }
  return std::reverse(res.begin(), res.end()), res;
}