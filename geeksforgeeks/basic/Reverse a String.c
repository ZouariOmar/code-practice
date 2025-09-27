/**
 * @file    Reverse a String.c
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Reverse a String source file
 * @version 0.1
 * @date    2025-05-21
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/reverse-a-string geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//? Function(s) prototype dev part
char *reverseString(char *s) {
  size_t l = 0, h = strlen(s) - 1;
  while (l < h) {
    s[l] ^= s[h];
    s[h] ^= s[l];
    s[l] ^= s[h];
    l++, h--;
  }
  return s;
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
