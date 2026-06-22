/**
 * @file      2144. Minimum Cost of Buying Candies With Discount.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     2144. Minimum Cost of Buying Candies With Discount source file
 * @version   0.1
 * @date      2026-06-01
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount leetcode @endlink
 */

//? Include prototype declaration part
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part

int comp(const void *a, const void *b) {
  return *(const int *)a - *(const int *)b;
}

int minimumCost(int *cost, int costSize) {
  qsort(cost, costSize, sizeof(*cost), comp);
  int total = 0;

  for (int i = costSize - 1; i >= 0; i -= 3) {
    total += cost[i];
    if (i - 1 >= 0)
      total += cost[i - 1];
  }

  return total;
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
