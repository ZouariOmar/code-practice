/**
 * @file      3318. Find X-Sum of All K-Long Subarrays I.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     3318. Find X-Sum of All K-Long Subarrays I source file
 * @version   0.1
 * @date      2025-11-04
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <unordered_map>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  std::vector<int> findXSum(std::vector<int> &nums, int k, int x) {
    int n = nums.size();
    std::vector<int> ans;
    ans.reserve(std::max(0, n - k + 1));

    std::unordered_map<int, int> freq;
    for (int i = 0; i < k; ++i)
      freq[nums[i]]++;

    auto compute_x_sum = [&](std::unordered_map<int, int> &f) -> int64_t {
      std::vector<std::pair<int, int>> items;
      items.reserve(f.size());
      for (auto &p : f)
        items.push_back({p.first, p.second});
      sort(items.begin(), items.end(), [](const auto &a, const auto &b) {
        if (a.second != b.second)
          return a.second > b.second;
        return a.first > b.first;
      });
      long long sum = 0;
      int take = std::min<int>(x, (int)items.size());
      for (int i = 0; i < take; ++i) {
        sum += 1LL * items[i].first * items[i].second;
      }
      return sum;
    };

    ans.push_back((int)compute_x_sum(freq));

    for (int i = k; i < n; ++i) {
      int add = nums[i];
      int rem = nums[i - k];

      freq[add]++;
      if (--freq[rem] == 0)
        freq.erase(rem);

      ans.push_back((int)compute_x_sum(freq));
    }

    return ans;
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
