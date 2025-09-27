/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-07-2024
 * @link      https://www.geeksforgeeks.org/problems/peak-element/1?page=1&sortBy=submissions
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief Given an 0-indexed array of integers arr[] of size n,
 * *
 * find its peak element and return it's index.
 * *
 * An element is considered to be peak if it's value is greater than or equal to the values of its adjacent elements (if they exist).
 *
 * @param arr
 * @param n
 * @return int
 */
int Solution::peakElement(int *arr, int n) {
  if (n == 1 || arr[n - 1] >= arr[n - 2] || arr[0] >= arr[1])
    return 1;
  
  for (int i = 1; i < n - 1; i++) {
    if (arr[i] >= arr[i + 1] && arr[i] >= arr[i - 1])
      return 1;
  }

  return 0;
}

/*
* Or this solution
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {

        if (n == 1)
            return 0;

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (arr[i] >= arr[i + 1])
                    return i;
            }
            else if (i == n - 1)
            {
                if (arr[i] >= arr[i - 1])
                    return i;
            }
            else
            {
                if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
                    return i;
            }
        }

        // If no peak element is found, return -1.
        return -1;
    }
};
*/