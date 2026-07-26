/**
 * @file      1260. Shift 2D Grid.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     1260. Shift 2D Grid source file
 * @version   0.1
 * @date      2026-07-20
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/shift-2d-grid leetcode @endlink
 */

//? Include prototype declaration part
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int **shiftGrid(int **grid, int gridSize, int *gridColSize,
                int k, int *returnSize, int **returnColumnSizes) {
  int rows = gridSize, cols = *gridColSize;

  int **array = malloc(rows * sizeof(int *));
  for (int i = 0; i < rows; i++) {
    array[i] = malloc(cols * sizeof(int));
  }

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      int index = i * cols + j,
          newIndex = (index + k) % (rows * cols),
          new_i = newIndex / cols,
          new_j = newIndex % cols;

      array[new_i][new_j] = grid[i][j];
    }
  }

  *returnSize = rows;
  *returnColumnSizes = malloc(rows * sizeof(int));
  for (int i = 0; i < rows; i++)
    (*returnColumnSizes)[i] = cols;

  return array;
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
