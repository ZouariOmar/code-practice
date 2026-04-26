/**
 * @file      3740. Minimum Distance Between Three Equal Elements I.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     3740. Minimum Distance Between Three Equal Elements I source file
 * @version   0.1
 * @date      2026-04-10
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i leetcode @endlink
 */

//? Include prototype declaration part
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part
int min(const int x, const int y) {
  return x > y ? y : x;
}

int minimumDistance(int *nums, int numsSize) {
  int last2[100] = {};
  int res = 200;

  for (int i = 0; i < numsSize; i++) {
    int val = nums[i] - 1, pos = i + 1;
    int pack = last2[val];
    int old = pack & 255, cur = pack >> 8;

    last2[val] = cur | (pos << 8);

    if (old)
      res = min(res, (pos - old) << 1);
  }

  return -(res == 200) | res;
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
