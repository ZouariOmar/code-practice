/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-07-2024
 * @link      https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Returns an array of integers of size 2 denoting the answer (The first index contains B and second index contains A)
 * *
 * - One number 'A' from set {1, 2,....,N} is missing.
 * *
 * - One number 'B' occurs twice in array.
 * @param arr
 * @param n
 * @return vector<int>
 */
vector<int> Solution::findTwoElement(vector<int> arr, int n) {
  // Sort the arr
  sort(arr.begin(), arr.end());
  vector<int> res(2, -1);

  for (int it : arr)
    cout << it << " ";
  printf("\n");

  // Find the 'B' element
  int i = 0;
  while (res[0] == -1 || res[1] == -1 && i < n - 1) {
    if (arr[i] == arr[i + 1])
      res[0] = arr[i];

    if (arr[i] + 2 == arr[i + 1])
      res[1] = arr[i] + 1;

    // Increment the index
    i++;
  }

  if (res[1] == -1)
    res[1] = arr[0] - 1;
  
  if (!res[1])
    res[1] = arr[n - 1] + 1;

  return res;
}