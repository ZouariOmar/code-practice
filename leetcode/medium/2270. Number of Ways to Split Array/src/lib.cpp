/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-03
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/number-of-ways-to-split-array leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

// /**
//  * @brief ### Return the number of valid splits in nums
//  * ! Runtime ERROR
//  * @param arr {vector<int> &}
//  * @return int
//  */
// int Solution::waysToSplitArray(vector<int> &arr) {
//   int ans{}, // Var to store the answer
//       sum{}, // Var to store the sum of `arr` vector
//       right_sub_sum{};
//   size_t len{arr.size()};

//   // Determine `sum` var
//   for (int &it : arr)
//     sum += it;

//   for (size_t i{}; i < len - 1; i++) {
//     right_sub_sum += arr[i], // Add the i element to `right_sub_sum` var
//         sum -= arr[i];       // Rm the i element of `arr` => So sum will be as the left_sub_sum
//     if (right_sub_sum >= sum)
//       ans++;
//   }

//   return ans; // Return the main solution var
// }

// * Other solution
// int waysToSplitArray(vector<int> &nums) {
//   const int n = nums.size();
//   long long sum = accumulate(nums.begin(), nums.end(), 0LL);
//   long long acc = 0LL;
//   int cnt = 0;
//   for (int i = 0; i < n - 1; i++) {
//     acc += nums[i];
//     cnt += (2 * acc >= sum);
//   }
//   return cnt;
// }

/**
 * @brief ### Return the number of valid splits in nums
 *
 * @param nums {vector<int> &}
 * @return int
 */
int waysToSplitArray(vector<int> &nums) {
  long long sum = accumulate(nums.begin(), nums.end(), 0LL);
  return count_if(nums.begin(), nums.end() - 1, [acc = 0LL, sum](int x) mutable {
    acc += x;
    return 2 * acc >= sum;
  });
}
