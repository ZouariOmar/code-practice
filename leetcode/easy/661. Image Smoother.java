/**
 * 661. Image Smoother.java
 *
 * 661. Image Smoother leetcode problem
 *
 * @author @ZouariOmar <zouariomar20@gmail.com>
 * @version 0.1
 * @since 07/09/2025
 * @link https://leetcode.com/problems/image-smoother leetcode
 */

class Solution {
  static int helper(int arr[][], int i, int j) {
    int n = arr.length, m = arr[0].length,
        count = 1, sum = arr[i][j];

    if (i - 1 >= 0) {
      sum += arr[i - 1][j];
      count++;
      if (j - 1 >= 0) {
        sum += arr[i - 1][j - 1];
        count++;
      }
      if (j + 1 < m) {
        sum += arr[i - 1][j + 1];
        count++;
      }
    }

    if (i + 1 < n) {
      sum += arr[i + 1][j];
      count++;
      if (j - 1 >= 0) {
        sum += arr[i + 1][j - 1];
        count++;
      }
      if (j + 1 < m) {
        sum += arr[i + 1][j + 1];
        count++;
      }
    }
    if (j + 1 < m) {
      sum += arr[i][j + 1];
      count++;
    }
    if (j - 1 >= 0) {
      sum += arr[i][j - 1];
      count++;
    }
    return sum / count;
  }

  public int[][] imageSmoother(int[][] arr) {
    int n = arr.length, m = arr[0].length, ans[][] = new int[n][m];
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        ans[i][j] = helper(arr, i, j);
    return ans;
  }
} // Solution class
