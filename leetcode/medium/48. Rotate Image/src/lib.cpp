/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      28-08-2024
 * @link      https://leetcode.com/problems/rotate-image
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

void Solution::rotate(vector<vector<int>> &matrix) {
  size_t len = matrix.size();
  int top{};
  int bottom = len - 1;
  while (top < bottom) {
    for (int i{}; i < len; i++)
      swap(matrix[top][i], matrix[bottom][i]);
    top++;
    bottom--;
  }

  for (int i{0}; i < len; i++)
    for (int j{i + 1}; j < len; j++)
      swap(matrix[i][j], matrix[j][i]);
}

/*
* Other solution
class Solution {
public:
  void rotate(vector<vector<int>>& matrix) {
    int rows=matrix.size();
    int columns=rows; //since square matrix

    //transpose
    for(int i=0;i<rows;i++ )
    {
        for(int j=i;j<columns;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    //reverse
    for(int i=0;i<rows;i++)
    {
    reverse(matrix[i].begin(),matrix[i].end());
    }
  }
};
*/