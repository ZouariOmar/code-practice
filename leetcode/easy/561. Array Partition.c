/**
 * @file    561. Array Partition.c
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   561. Array Partition source file
 * @version 0.1
 * @date    2025-06-02
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/array-partition leetcode @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part

int __compar__(const void *a, const void *b) {
  return *((int *)a) > *((int *)b);
}

int arrayPairSum(int *nums, int numsSize) {
  qsort(nums, numsSize, sizeof(int), __compar__);
  int result = 0;
  for (unsigned int i = 0; i < numsSize - 1; i += 2)
    result += nums[i];
  return result;
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
