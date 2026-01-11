/**
 * @file    1128. Number of Equivalent Domino Pairs.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   1128. Number of Equivalent Domino Pairs source file
 * @version 0.1
 * @date    2025-05-04
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/number-of-equivalent-domino-pairs/description/?envType=daily-question&envId=2025-05-04 leetcode @endlink
 */

//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int numEquivDominoPairs(std::vector<std::vector<int>> &dominoes) {
    std::map<std::pair<int, int>, int> ump;
    int result{};
    for (std::vector<int> &vec : dominoes) {
      if (vec[0] > vec[1])
        std::swap(vec[0], vec[1]);
      result += ump[{vec[0], vec[1]}]++;
    }
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
