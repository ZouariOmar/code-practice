/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      14-08-2024
 * @link      https://leetcode.com/problems/longest-substring-without-repeating-characters
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Find the length of the longest substring without repeating characters.
 * @param s
 * @return int
 */
int Solution::lengthOfLongestSubstring(string s) {
  size_t n{s.length()};
  int maxLength{}, left{};
  unordered_set<char> charSet;

  for (int right = 0; right < n; right++) {
    if (charSet.count(s[right]) == 0) {
      charSet.insert(s[right]);
      maxLength = max(maxLength, right - left + 1);
    } else {
      while (charSet.count(s[right])) {
        charSet.erase(s[left]);
        left++;
      }
      charSet.insert(s[right]);
    }
  }

  return maxLength;
}

/*
 * Or this solution
class Solution {
public:

  int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;

        int mini = 0, maxi = 0;
        int maxLength = 0;

        while(maxi < s.length()) {
            bool boo = false;
            for(int j = mini; j < maxi; j++) {
                if(s[j] == s[maxi]) {
                    mini = j + 1;
                    boo = true;
                    break;
                }
            }
            if(!boo) {
                maxLength = max(maxLength, maxi - mini + 1);
            }
            maxi++;
        }

        return maxLength;
    }
};
*/