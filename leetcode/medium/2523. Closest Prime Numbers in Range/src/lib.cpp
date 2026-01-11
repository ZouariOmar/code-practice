/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-07
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/closest-prime-numbers-in-range leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the positive integer array `ans = [num1, num2]`. If there are multiple pairs satisfying these conditions, return the one with the smallest num1 value. If no such numbers exist, return `[-1, -1]`.
 *
 * @class   Solution
 * @param r int
 * @param l int
 * @return  std::vector<int>
 */
std::vector<int> Solution::closestPrimes(int r, int l) {
  auto is_prime = [](int n) {
    if (n <= 1)
      return false;
    if (n <= 3)
      return true;
    if (n % 2 == 0 || n % 3 == 0)
      return false;
    for (int i = 5; i * i <= n; i += 6) {
      if (n % i == 0 || n % (i + 2) == 0)
        return false;
    }
    return true;
  };

  std::vector<int> primes;
  for (int num = std::max(2, l); num <= r; ++num) {
    if (is_prime(num)) {
      primes.push_back(num);
    }
  }

  if (primes.size() < 2) {
    return {-1, -1};
  }

  int min_gap = INT_MAX;
  std::vector<int> result = {-1, -1};

  for (int i = 1; i < primes.size(); ++i) {
    int gap = primes[i] - primes[i - 1];
    if (gap < min_gap) {
      min_gap = gap;
      result = {primes[i - 1], primes[i]};
    }
  }

  return result;
}
