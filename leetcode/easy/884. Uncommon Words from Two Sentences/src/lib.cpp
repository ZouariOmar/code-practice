/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      17-09-2024
 * @link      https://leetcode.com/problems/uncommon-words-from-two-sentences
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief
 * @param s1 string
 * @param s2 string
 * @return vector<string>
 */
vector<string> Solution::uncommonFromSentences(string s1, string s2) {
  stringstream _s1(s1);
  stringstream _s2(s2);
  unordered_map<string, int> mp;

  string holder;
  while (_s1 >> holder)
    mp[holder]++;

  while (_s2 >> holder)
    mp[holder]++;

  vector<string> res;
  unordered_map<string, int>::iterator it = mp.begin();
  while (it != mp.end()) {
    if (it->second == 1) res.push_back(it->first);
    it++;
  }

  return res;
}

void boost() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

/*
* Other solution
#pragma GCC target("avx, mmx, sse2, sse3, sse4")

static const int disableSync = [](void) noexcept -> int
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution final
{
public:
    std::vector<std::string> uncommonFromSentences(const std::string s1, const std::string s2) const noexcept
    {
        std::unordered_map<std::string, size_t> counter;
        std::stringstream ss1(s1);
        std::string word;
        while (ss1 >> word)
            ++counter[word];
        std::stringstream ss2(s2);
        while (ss2 >> word)
            ++counter[word];
        std::vector<std::string> uncommons;
        uncommons.reserve(counter.size() + 10);
        for (const auto& [word, count] : counter)
            if (count == 1)
                uncommons.push_back(word);
        return uncommons;
    }
};
*/
