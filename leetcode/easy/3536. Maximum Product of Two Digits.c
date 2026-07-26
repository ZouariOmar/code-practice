/**
 * @file      3536. Maximum Product of Two Digits.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     3536. Maximum Product of Two Digits source file
 * @version   0.1
 * @date      2026-07-25
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/maximum-product-of-two-digits leetcode @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part
int maxProduct(int n) {
  int a = -1, b = -1;

  while (n) {
    int x = n % 10;

    if (x > b) {
      a = b, b = x;
    } else if (x > a) {
      a = x;
    }

    n /= 10;
  }

  return a * b;
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
