/**
 * @file    507. Perfect Number.c
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   507. Perfect Number source file
 * @version 0.1
 * @date    2025-05-21
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/perfect-number leetcode @endlink
 */

//? Include prototype declaration part
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part
bool checkPerfectNumber(int num) {
  int sum = 1;
  for (int i = 2; i * i < num; i++) {
    if (num % i)
      continue;
    sum += i + ((i * i != num) ? num / i : 0);
  }
  return sum == num && num != 1;
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
