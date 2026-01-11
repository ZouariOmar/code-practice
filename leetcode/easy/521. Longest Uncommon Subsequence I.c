/**
 * @file    521. Longest Uncommon Subsequence I.c
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   521. Longest Uncommon Subsequence I source file
 * @version 0.1
 * @date    2025-05-23
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/longest-uncommon-subsequence-i leetcode @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//? Function(s) prototype dev part
int findLUSlength(char *a, char *b) {
  return strcmp(a, b) ? (strlen(a) > strlen(b) ? strlen(a) : strlen(b)) : -1;
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
