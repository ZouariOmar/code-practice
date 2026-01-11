/**
 * @file    575. Distribute Candies.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   575. Distribute Candies source file
 * @version 0.1
 * @date    2025-06-07
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/distribute-candies leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <unordered_set>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int distributeCandies(std::vector<int> &candyType) {
    std::unordered_set<int> st(candyType.begin(), candyType.end());
    return std::min(st.size(), candyType.size() / 2);
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
