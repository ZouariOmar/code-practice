/**
 * @file      628. Maximum Product of Three Numbers.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     628. Maximum Product of Three Numbers source file
 * @version   0.1
 * @date      2026-07-26
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/maximum-product-of-three-numbers leetcode @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))

//? Function(s) prototype dev part
int maximumProduct(int *nums, int numsSize) {
  int a = -1001, b = a, c = b; // max 3
  int x = 1001, y = x;         // min 2

  for (size_t i = 0; i < numsSize; ++i) {
    int pa = a, pb = b, px = x; // cache old values

    a = max(a, nums[i]);          // Update 1st max
    b = max(b, min(pa, nums[i])); // Shift to 2nd max
    c = max(c, min(pb, nums[i])); // Shift to 3rd max

    x = min(x, nums[i]);          // Update 1st min
    y = min(y, max(px, nums[i])); // Shift to 2nd min
  }

  return max(a * b * c, a * x * y);
}

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  printf("Hello World !\n");
  return EXIT_SUCCESS;
}
