/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://www.geeksforgeeks.org/problems/smallest-number5829/1
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Given two integers s and d. The task is to find the smallest number such that the sum of its digits is s and the number of digits in the number are d.
 * Return a string that is the smallest possible number. If it is not possible then return -1.
 *
 * @param s
 * @param d
 * @return string
 */
string Solution::smallestNumber(int s, int d) {
  string res = "";
  int top_nbr = 9;

  while (res.size() < d - 1) {
    if (top_nbr >= s)
      top_nbr--;
    else {
      res.push_back(48 + top_nbr);
      s -= top_nbr;
    }
  }

  if (s > 0 && s < 10)
    res.push_back(48 + s);

  if (res[0] == '0')
    swap(res[0], res[res.size() - 1]);

  if (res.size() == d) {
    sort(res.begin(), res.end());
    if (res[0] == '0')
      for (int i = 1; i < res.size(); i++)
        if (res[i] != '0') {
          swap(res[0], res[i]);
          break;
        }

      return res;
  } else
    return "-1";
}

/*
* GG Solution
* User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {

        if (d * 9 < s)
            return "-1";

        int n = pow(10, d - 1);
        int sum = s - 1;
        string temp = to_string(n);

        int i = d - 1;
        while (i >= 0 && sum > 0) {
            if (sum > 9) {
                temp[i] = '9';
                sum = sum - 9;
            } else {
                int val = temp[i] - '0';
                val = val + sum;
                temp[i] = '0' + val;
                sum = 0;
            }
            i--;
        }
        return temp;
    }

};
*/