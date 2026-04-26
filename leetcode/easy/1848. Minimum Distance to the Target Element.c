/**
 * @file      1848. Minimum Distance to the Target Element.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     1848. Minimum Distance to the Target Element source file
 * @version   0.1
 * @date      2026-04-13
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/minimum-distance-to-the-target-element leetcode @endlink
 */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part

int min(const int x, const int y) {
  return x > y ? y : x;
}

int getMinDistance(int *nums, int numsSize, int target, int start) {
  unsigned int res = INT_MAX;

  for (int i = 0; i < numsSize; ++i) {
    if (nums[i] == target) {
      res = min(res, abs(i - start));
    }
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
