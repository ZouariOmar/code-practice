
/**
 * @file Two Sum - Pair with Given Sum.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Two Sum - Pair with Given Sum.java header file
 * @version 0.1
 * @date 2025-06-24
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/hashing-gfg-160/problem/key-pair5616
 *       geeksforgeeks @endlink
 */

import java.util.HashSet;

class Solution {
  boolean twoSum(int arr[], int target) {
    HashSet<Integer> hset = new HashSet<>();
    for (final int num : arr) {
      if (hset.contains(target - num))
        return true;
      hset.add(num);
    }
    return false;
  }
} // Solution class
