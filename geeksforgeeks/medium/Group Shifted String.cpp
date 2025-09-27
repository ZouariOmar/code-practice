/**
 * @file      Group Shifted String.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Group Shifted String source file
 * @version   0.1
 * @date      09/05/2025
 * @copyright Copyright (c) 2025
 * @link      https://www.geeksforgeeks.org/batch/gfg-160-problems/track/hashing-bonus-problem/article/MTM5MzI2 geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <unordered_map>
#include <vector>

//? Function(s)/Class(es) prototype dev part

class Solution {
private:
  std::string getHash(std::string key) const {
    int shift{key[0] - 'a'};
    for (char &c : key) {
      c -= shift;
      if (c < 'a')
        c += 26;
    }
    return key;
  }

public:
  std::vector<std::vector<std::string>> groupShiftedString(std::vector<std::string> &arr) {
    std::vector<std::vector<std::string>> res;
    std::unordered_map<std::string, int> mp;
    for (std::string &s : arr) {
      std::string key{getHash(s)};
      if (mp.find(key) == mp.end()) {
        mp[key] = res.size();
        res.push_back({});
      }
      res[mp[key]].push_back(s);
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
