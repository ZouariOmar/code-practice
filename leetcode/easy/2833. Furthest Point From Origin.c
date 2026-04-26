/**
 * @file      2833. Furthest Point From Origin.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     2833. Furthest Point From Origin source file
 * @version   0.1
 * @date      2026-04-25
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/furthest-point-from-origin leetcode @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//? Function(s) prototype dev part
int furthestDistanceFromOrigin(char *moves) {
  int left = 0, right = 0, blanks = 0;

  for (size_t i = 0, len = strlen(moves); i < len; ++i) {
    if (moves[i] == 'L')
      ++left;
    else if (moves[i] == 'R')
      ++right;
    else
      ++blanks;
  }

  return abs(left - right) + blanks;
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
