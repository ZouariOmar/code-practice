/**
 * @file    551. Student Attendance Record I.c
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   551. Student Attendance Record I source file
 * @version 0.1
 * @date    2025-05-25
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/student-attendance-record-i leetcode @endlink
 */

//? Include prototype declaration part
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//? Function(s) prototype dev part
bool checkRecord(char *s) {
  size_t a = 0, l = 0, len = strlen(s);
  for (size_t i = 0; i < len; i++) {
    if (*(s + i) == 'A') {
      if (++a == 2)
        return false;
      l = 0;
    } else if (*(s + i) == 'L') {
      if (++l == 3)
        return false;
    } else
      l = 0;
  }
  return true;
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
