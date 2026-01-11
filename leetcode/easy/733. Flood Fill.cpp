/**
 * @file      733. Flood Fill.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     733. Flood Fill source file
 * @version   0.1
 * @date      09/05/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/flood-fill leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
private:
  static void helper(std::vector<std::vector<int>> &image, int row, int col, int &color, int &initColor) {
    if (row < 0 || row >= image.size() || col < 0 || col >= image[0].size() || image[row][col] != initColor)
      return;
    image[row][col] = color;
    helper(image, row - 1, col, color, initColor);
    helper(image, row + 1, col, color, initColor);
    helper(image, row, col - 1, color, initColor);
    helper(image, row, col + 1, color, initColor);
  }

public:
  std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>> &image, int sr, int sc, int color) {
    int oldColor = image[sr][sc];
    if (oldColor == color)
      return image;
    return helper(image, sr, sc, color, oldColor), image;
  }
}; // Solution class

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
