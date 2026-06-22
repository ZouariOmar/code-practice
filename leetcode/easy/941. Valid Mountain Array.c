/**
 * @file      941. Valid Mountain Array.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     941. Valid Mountain Array source file
 * @version   0.1
 * @date      2026-06-10
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/valid-mountain-array leetcode @endlink
 */

//? Include prototype declaration part
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part
bool validMountainArray(int *arr, int arrSize) {
  if (arrSize < 3)
    return false;

  unsigned int i = 0;
  while (i + 1 < arrSize && arr[i] < arr[i + 1]) {
    ++i;
  }

  if (i == 0 || i == arrSize - 1)
    return false;

  while (i + 1 < arrSize && arr[i] > arr[i + 1]) {
    ++i;
  }

  return i == arrSize - 1;
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
