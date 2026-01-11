/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      11-08-2024
 * @link      https://leetcode.com/problems/kth-distinct-string-in-an-array
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Given an array of strings arr, and an integer k, return the kth distinct string present in arr. If there are fewer than k distinct strings, return an empty string "".
 * *
 * - A distinct string is a string that is present only once in an array.
 * @param arr
 * @param k
 * @return string
 */
string Solution::kthDistinct(vector<string> &arr, int k) {
  for (string it : arr)
    if (count(arr.begin(), arr.end(), it) == 1 && !--k)
      return it;
  return "";
}

/*
* Or this solution
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> frequency;

        // Count the frequency of each string in the array
        for (const string& s : arr) {
            frequency[s]++;
        }

        // Traverse the array to find the k-th distinct string
        for (const string& s : arr) {
            if (frequency[s] == 1) {
                k--;
                if (k == 0) {
                    return s;
                }
            }
        }

        // If no such k-th distinct string is found, return an empty string
        return "";
    }
};
*/