/**
 * @file      1189. Maximum Number of Balloons.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     1189. Maximum Number of Balloons source file
 * @version   0.1
 * @date      2026-06-22
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/maximum-number-of-balloons leetcode @endlink
 */

//? Include prototype declaration part
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//? Function(s) prototype dev part

int min(int count, ...) {
  va_list args;
  va_start(args, count);

  int min_val = va_arg(args, int);

  for (int i = 1; i < count; i++) {
    int next_val = va_arg(args, int);
    if (next_val < min_val) {
      min_val = next_val;
    }
  }

  va_end(args);
  return min_val;
}

int maxNumberOfBalloons(char *text) {
  int b = 0, a = 0, l = 0, n = 0, o = 0;

  for (size_t i = 0, len = strlen(text); i < len; ++i) {
    switch (text[i]) {
    case 'a':
      ++a;
      break;
    case 'b':
      ++b;
      break;
    case 'l':
      ++l;
      break;
    case 'n':
      ++n;
      break;
    case 'o':
      ++o;
      break;
    }
  }

  return min(5, b, a, n, l / 2, o / 2);
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
