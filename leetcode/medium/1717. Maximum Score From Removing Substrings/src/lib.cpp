/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/maximum-score-from-removing-substrings
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Return the maximum points you can gain after applying the above operations on s.
 *
 * @param s
 * @param x "ab"
 * @param y "ba"
 * @return int
 */
int Solution::maximumGain(string s, int x, int y) {
  // Init the number of points (0 by default)
  int pts = 0;

  // Fiend the maximum gain
  if (x > y) {
    rm_str(&s, &pts, "ab", x);
    rm_str(&s, &pts, "ba", y);
  } else {
    rm_str(&s, &pts, "ba", y);
    rm_str(&s, &pts, "ab", x);
  }

  return pts;
}

/**
 * @brief Rm the sub_s string from the s string and update the pts value
 * 
 * @param s 
 * @param pts 
 * @param sub_s 
 * @param z 
 */
void Solution::rm_str(string *s, int *pts, string sub_s, int z) {
  int i = s->find(sub_s);
  while (i < s->size()) {
    //* Add points
    *pts += z;

    //* Rm the sub_s string from the s string
    s->erase(s->begin() + i, s->begin() + i + 2);

    //* Find another position for sub_s string
    i = s->find(sub_s);
  }
}

/*
* or this solution
class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int aCount = 0;
        int bCount = 0;
        int lesser = min(x, y);
        int result = 0;

        for (char c : s) {
            if (c > 'b') {
                result += min(aCount, bCount) * lesser;
                aCount = 0;
                bCount = 0;
            } else if (c == 'a') {
                if (x < y && bCount > 0) {
                    bCount--;
                    result += y;
                } else {
                    aCount++;
                }
            } else {
                if (x > y && aCount > 0) {
                    aCount--;
                    result += x;
                } else {
                    bCount++;
                }
            }
        }

        result += min(aCount, bCount) * lesser;
        return result;
    }
};
*/