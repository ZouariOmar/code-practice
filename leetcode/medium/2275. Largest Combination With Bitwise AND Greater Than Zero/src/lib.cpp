/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-07
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"  

//? Function/Class prototype dev part

/**
 * @brief ### Return the size of the largest combination of candidates with a bitwise AND greater than 0.
 * @param candidates vector<int> &
 * @return int
 */
int Solution::largestCombination(vector<int> &candidates) {
  int n = candidates.size(), ans{};

  for (int i{}; i < 32; i++) {
    int cnt{};
    for (int &candidate : candidates)
      if (candidate & (1 << i)) cnt++;
    ans = max(ans, cnt);
  }
  return ans;
}

/*
* Other solution
std::array<int, 24> bc{};
for(int i : candidates) {
    int sh{};
    while(i) {
        bc[sh] += i & 1;
        ++sh;
        i >>= 1;
    }
}
return *std::max_element(bc.cbegin(), bc.cend());

auto init = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
} ();
*/