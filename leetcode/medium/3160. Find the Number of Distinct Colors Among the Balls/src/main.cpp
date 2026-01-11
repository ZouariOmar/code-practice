/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-07
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/find-the-number-of-distinct-colors-among-the-balls leetcode @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  // Declare vars/objs
  Solution sl;
  vector<vector<int>> arr({{0, 1}, {0, 4}, {1, 2}, {1, 5}, {1, 4}});
  vector<int> res = sl.queryResults(4, arr);

  //! Show the result
  for (const int &it : res)
    cout << it << " ";

  return 0;
}

