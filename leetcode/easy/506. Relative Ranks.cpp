/**
 * @file    506. Relative Ranks.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   506. Relative Ranks source file
 * @version 0.1
 * @date    2025-05-03
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/relative-ranks leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <map>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  std::vector<std::string> findRelativeRanks(std::vector<int> &score) {
    std::map<int, unsigned int> mp;
    size_t len(score.size());
    for (size_t i{}; i < len; i++)
      mp[score[i]] = i;
    std::vector<std::string> result(len);

    size_t i{};
    for (std::map<int, unsigned int>::reverse_iterator it = mp.rbegin(); it != mp.rend(); it++) {
      if (i == 0)
        result[it->second] = "Gold Medal";
      else if (i == 1)
        result[it->second] = "Silver Medal";
      else if (i == 2)
        result[it->second] = "Bronze Medal";
      else
        result[it->second] = std::to_string(i + 1);
      i++;
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
