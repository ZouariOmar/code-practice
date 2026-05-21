/**
 * @file      2540. Minimum Common Value.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     2540. Minimum Common Value source file
 * @version   0.1
 * @date      2026-05-19
 * @copyright Copyright (c) 2026
 * @link      https://github.com/ZouariOmar ZouariOmar @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part
int getCommon(int *nums1, int nums1Size, int *nums2, int nums2Size) {
  int i = 0, j = 0;
  while (i < nums1Size && j < nums2Size) {
    if (nums1[i] == nums2[j])
      return nums1[i];
    nums1[i] > nums2[j] ? ++j : ++i;
  }
  return -1;
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
