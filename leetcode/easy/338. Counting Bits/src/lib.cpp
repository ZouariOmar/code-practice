/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-10
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/counting-bits leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return an array ans of length `n + 1` such that for each `i` (0 <= i <= n), `ans[i]` is the number of 1's in the binary representation of i.
 * @param n int
 * @return vector<int>
 */
vector<int> Solution::countBits(int n) {
  vector<int> res;
  for (int i{}; i <= n; i++)
    res.push_back(__builtin_popcount(i));
  return res;
}

/*
* Other solution
class Solution {
public:
    vector<int> countBits(int n) {
        // Create a vector of size n + 1
        vector<int> result(n + 1, 0);

        // Base case: if n is 0, return the vector
        if (n == 0) {
            return result;
        }

        // Base cases:
        // Set the first two elements of the vector
        result[0] = 0;
        if (n >= 1) {
            result[1] = 1;
        }

        // Iterate from 2 to n
        for (int x = 2; x <= n; ++x) {
            // If 'x' is even, set the x-th element of the vector to
            // the (x / 2)-th element
            if (x % 2 == 0) {
                result[x] = result[x / 2];
            }
            // If x is odd, set the x-th element of the vector to
            // the (x / 2)-th element + 1
            else {
                result[x] = result[x / 2] + 1;
            }
        }

        // Return the final vector
        return result;
    }
};
*/