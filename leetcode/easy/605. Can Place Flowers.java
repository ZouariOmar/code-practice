/**
 * @file 605. Can Place Flowers.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 605. Can Place Flowers.java header file
 * @version 0.1
 * @date 2025-06-20
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/can-place-flowers leetcode @endlink
 */

class Solution {
  public boolean canPlaceFlowers(int[] flowerbed, int n) {
    int len = flowerbed.length;
    for (int i = 0; i < len; i += 2) {
      if (flowerbed[i] == 0) {
        if (i == (len - 1) || flowerbed[i] == flowerbed[i + 1])
          n--;
        else
          i++;
      }
    }
    return n <= 0;
  }
} // Solution class
