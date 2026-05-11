/**
 * @file      2553. Separate the Digits in an Array.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     2553. Separate the Digits in an Array source file
 * @version   0.1
 * @date      2026-05-11
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/separate-the-digits-in-an-array leetcode @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part
int reverse(int n) {
  int rev = 0;
  while (n > 0) {
    int b = n % 10;
    rev = (rev * 10) + b;
    n = n / 10;
  }
  return rev;
}

int digitsCount(int n) {
  if (n == 0) {
    return 1;
  }

  int count = 0;
  while (n > 0) {
    count++;
    n = n / 10;
  }
  return count;
}

int *separateDigits(int *nums, int numsSize, int *returnSize) {
  int *ans = (int *)malloc(sizeof(int) * (numsSize * 10));

  int j = 0;
  for (int i = 0; i < numsSize; i++) {
    int n = nums[i];
    int digits = digitsCount(n);
    int p = reverse(n);

    while (digits--) {
      ans[j++] = p % 10;
      p = p / 10;
    }
  }
  *returnSize = j;
  return ans;
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
