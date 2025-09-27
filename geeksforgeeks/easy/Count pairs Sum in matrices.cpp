/**
 * @file    Count pairs Sum in matrices.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Count pairs Sum in matrices source file
 * @version 0.1
 * @date    2025-06-01
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/count-pairs-sum-in-matrices4332/1 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <unordered_set>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int countPairs(std::vector<std::vector<int>> &mat1, std::vector<std::vector<int>> &mat2, int x) {
    std::unordered_set<int> st;
    for (const std::vector<int> &row : mat1)
      for (const int &val : row)
        st.insert(x - val);
    int result{};
    for (const std::vector<int> &row : mat2)
      for (const int &val : row)
        if (st.count(val))
          result++;
    return result;
  }
}; // Solution class

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
