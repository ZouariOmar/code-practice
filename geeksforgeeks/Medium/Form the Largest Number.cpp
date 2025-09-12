/**
 * @file      Form the Largest Number.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Form the Largest Number source file
 * @version   0.1
 * @date      08/22/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-bonus-problems/problem/largest-number-formed-from-an-array1117 GFG160 @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using std::vector, std::string;

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  string findLargest(vector<int> &arr) {
    std::sort(arr.begin(), arr.end(), [](const unsigned int &a, const unsigned int &b) -> bool {
      return std::to_string(a) + std::to_string(b) > std::to_string(b) + std::to_string(a);
    });

    if (!arr[0])
      return "0";
    // Conversation
    string res{};
    for (const int &it : arr)
      res.assign(std::to_string(it));
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
  Solution sl;
  vector<int> arr({3, 30, 34, 5, 9});
  std::cout << sl.findLargest(arr);
  return EXIT_SUCCESS;
}
