/**
 * @file      3499. Maximize Active Section with Trade I.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     3499. Maximize Active Section with Trade I source file
 * @version   0.1
 * @date      2026-07-21
 * @copyright Copyright (c) 2026
 * @link      https://github.com/ZouariOmar ZouariOmar @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//? Function(s) prototype dev part
int max(int a, int b) {
  return a > b ? a : b;
}

int maxActiveSectionsAfterTrade(char *s) {
  size_t n = strlen(s);
  int prevZero = 0,
      currZero = 0,
      totalOnes = 0,
      best = 0,
      i = 0;

  while (i < n) {
    if (s[i] == '0') {
      prevZero++;
      i++;

    } else {
      while (i < n && s[i] == '1') {
        totalOnes++;
        i++;
      }

      while (i < n && s[i] == '0') {
        currZero++;
        i++;
      }

      if (prevZero && currZero)
        best = max(best, prevZero + currZero);

      prevZero = currZero;
      currZero = 0;
    }
  }

  return totalOnes + best;
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
