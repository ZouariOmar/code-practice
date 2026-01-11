/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      dd-mm-yyyy
 * @link      NONE
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Return an m x n 2D array constructed according to the above procedure, or an empty 2D array if it is impossible.
 * @param original
 * @param m
 * @param n
 * @return vector<vector<int>>
 */
vector<vector<int>> Solution::construct2DArray(vector<int> &original, int m, int n) {
  size_t len = original.size();
  if (m * n != len) return {};  // Check if it's possible to reshape

  vector<vector<int>> res(m, vector<int>(n));  // Initialize with correct dimensions

  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      res[i][j] = original[i * n + j];

  return res;
}

/*
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> result(m);
        int i;
        switch (m * n == original.size() ? 1 : 0) {
            case 1:
                i = 0;
                while (i < m) {
                    result[i] = vector<int>(original.begin() + i * n, original.begin() + (i * n + n));
                    i++;
                }
                break;
            default:
                return {};
        }
        return result;
    }
};

static const auto speedup = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

//Stolen From kartikdevsharmaa
 */