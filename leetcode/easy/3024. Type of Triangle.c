/**
 * @file    3024. Type of Triangle.c
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   3024. Type of Triangle source file
 * @version 0.1
 * @date    2025-05-19
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/type-of-triangle leetcode @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part
char *triangleType(int *nums, int numsSize) {
  int a = nums[0], b = nums[1], c = nums[2];

  if (a + b <= c || b + c <= a || c + a <= b)
    return "none";

  if (a == b && b == c)
    return "equilateral";

  if (a == b || b == c || c == a)
    return "isosceles";

  return "scalene";
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
