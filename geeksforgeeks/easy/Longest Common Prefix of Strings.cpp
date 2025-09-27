/**
 * @file    Longest Common Prefix of Strings.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Longest Common Prefix of Strings source file
 * @version 0.1
 * @date    2025-05-22
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  std::string longestCommonPrefix(std::vector<std::string> arr) {
    sort(arr.begin(), arr.end());
    std::string res;
    size_t length(arr.size());
    for (size_t i{}, len(arr[0].size()); i < len; i++) {
      if (arr[0][i] != arr[length - 1][i])
        break;
      else
        res += arr[0][i];
    }
    return res;
  }
};

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
