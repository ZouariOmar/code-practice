/**
 * @file      1464. Maximum Product of Two Elements in an Array.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     1464. Maximum Product of Two Elements in an Array source file
 * @version   0.1
 * @date      2026-07-27
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array leetcode @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part
int maxProduct(int *nums, int numsSize) {
  int a = -1, b = -1;

  for (size_t i = 0; i < numsSize; ++i) {
    if (nums[i] > a) {
      b = a, a = nums[i];
    } else if (nums[i] > b) {
      b = nums[i];
    }
  }

  return (a - 1) * (b - 1);
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
