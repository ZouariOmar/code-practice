/**
 * @file    2894. Divisible and Non-divisible Sums Difference.c
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   2894. Divisible and Non-divisible Sums Difference source file
 * @version 0.1
 * @date    2025-05-27
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/divisible-and-non-divisible-sums-difference leetcode @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part
int differenceOfSums(int n, int m) {
  int num1 = 0, num2 = 0;
  while (n) {
    (n % m) ? (num1 += n) : (num2 += n);
    n--;
  }
  return num1 - num2;
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
