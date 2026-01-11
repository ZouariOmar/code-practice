/**
 * @file main.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-02
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/count-vowel-strings-in-ranges leetcode @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  // Declare vars/objs
  Solution sl;
  vector<string> words({"a", "e", "i"});
  vector<vector<int>> queries({{0, 2}, {0, 1}, {2, 2}});
  vector<int> arr = sl.vowelStrings(words, queries);

  for (int &it : arr)
    cout << it << " ";
  
  cout << endl;
  return 0;
} 