/**
 * @file      1559. Detect Cycles in 2D Grid.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     1559. Detect Cycles in 2D Grid source file
 * @version   0.1
 * @date      2026-04-26
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/detect-cycles-in-2d-grid leetcode @endlink
 */

//? Include prototype declaration part
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

//? Function(s) prototype dev part

int parent[250000];

int find(int i) {
  if (parent[i] == i)
    return i;
  return parent[i] = find(parent[i]);
}

void unite(int i, int j) {
  int root_i = find(i);
  int root_j = find(j);
  if (root_i != root_j) {
    parent[root_i] = root_j;
  }
}

bool containsCycle(char **grid, int gridSize, int *gridColSize) {
  int rows = gridSize;
  int cols = gridColSize[0];
  int totalCells = rows * cols;
  for (int i = 0; i < totalCells; i++) {
    parent[i] = i;
  }
  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      int currentPos = r * cols + c;
      if (c + 1 < cols && grid[r][c] == grid[r][c + 1]) {
        int rightPos = r * cols + (c + 1);
        if (find(currentPos) == find(rightPos)) {
          return true;
        }
        unite(currentPos, rightPos);
      }
      if (r + 1 < rows && grid[r][c] == grid[r + 1][c]) {
        int downPos = (r + 1) * cols + c;
        if (find(currentPos) == find(downPos)) {
          return true;
        }
        unite(currentPos, downPos);
      }
    }
  }
  return false;
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
