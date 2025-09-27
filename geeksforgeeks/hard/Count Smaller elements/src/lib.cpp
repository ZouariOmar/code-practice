/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://www.geeksforgeeks.org/problems/count-smaller-elements2214/1
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Given an array arr containing positive integers.
 * *
 * Count and return an array ans where ans[i] denotes the number of smaller elements on right side of arr[i].
 * *
 * @param arr
 * @return vector<int>
 */
vector<int> Solution::constructLowerArray(vector<int> &arr) {
  vector<int> res(arr.size(), 0);

  int i = 0;
  while (i < arr.size() - 1) {
    i++;
  }

  for (int i = 0; i < arr.size() - 1; i++)
    for (int j = i + 1; j < arr.size(); j++) {
      if (!i && arr[i - 1] > arr[j - 1]) {
        res[j - 1] = res[i - 1];
        break;
      }
      if (arr[i] > arr[j])
        res[i]++;
    }

  return res;
}

/**
 * * Runtime : 0.36s
 * * @author : chatGPT
class Solution {
public:
    vector<int> constructLowerArray(vector<int> &arr) {
        int n = arr.size();
        vector<int> res(n, 0);
        vector<int> sortedArr = arr;

        // Normalize the array values to be within the range [1, n]
        sort(sortedArr.begin(), sortedArr.end());
        for (int &num : arr)
            num = lower_bound(sortedArr.begin(), sortedArr.end(), num) - sortedArr.begin() + 1;

        // Fenwick Tree for frequency counting
        vector<int> fenwickTree(n + 1, 0);

        auto update = [&](int idx, int val) {
            for (; idx <= n; idx += idx & -idx)
                fenwickTree[idx] += val;
        };

        auto query = [&](int idx) {
            int sum = 0;
            for (; idx > 0; idx -= idx & -idx)
                sum += fenwickTree[idx];
            return sum;
        };

        for (int i = n - 1; i >= 0; i--) {
            res[i] = query(arr[i] - 1);
            update(arr[i], 1);
        }

        return res;
    }
};
*/