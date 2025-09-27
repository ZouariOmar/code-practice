/**
 * @file      Add numbers in array.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Add numbers in array source file
 * @version   0.1
 * @date      27/09/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/problems/add-numbers-in-array/1?page=4&sortBy=difficulty geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  long long get_Sum(int n, std::vector<int> &input) {
    long long res{};
    for (const int &it : input)
      res += it;
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
