/**
 * @file    Pascal Triangle.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Pascal Triangle source file
 * @version 0.1
 * @date    2025-05-01
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/pascal-triangle0652/1 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  std::vector<int> nthRowOfPascalTriangle(int n) {
    n--;
    int prev(1);
    std::vector<int> res;
    res.push_back(prev);
    for (int i(1); i <= n; ++i) {
      int curr((prev * (n - i + 1)) / i);
      res.push_back(curr), prev = curr;
    }
    return res;
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
