/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-03
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/majority-vote/1 GFG @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int 
 */
int main(int argc, char const *argv[]) {
  Solution sl;
  vector<int> arr({2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6});

  arr = sl.findMajority(arr);

  // Print the result
  for (int it : arr)
    cout << it << " ";

  return 0;
}