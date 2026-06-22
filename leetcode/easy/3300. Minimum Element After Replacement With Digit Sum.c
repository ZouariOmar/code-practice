/**
 * @file      3300. Minimum Element After Replacement With Digit Sum.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     3300. Minimum Element After Replacement With Digit Sum source file
 * @version   0.1
 * @date      2026-05-29
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum leetcode @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part
int sumDigits(const int no) {
  return !no ? 0 : no % 10 + sumDigits(no / 10);
}

int min(const int x, const int y) {
  return x < y ? x : y;
}

int minElement(int *nums, int numsSize) {
  int res = sumDigits(nums[0]);

  for (size_t i = 1; i < numsSize; ++i) {
    res = min(res, sumDigits(nums[i]));
  }

  return res;
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
