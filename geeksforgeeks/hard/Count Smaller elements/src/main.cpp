/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://www.geeksforgeeks.org/problems/count-smaller-elements2214/1
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

int main(int argc, char const *argv[]) {
  //! Testing part
  vector<int> arr = {12, 1, 2, 3, 0, 11, 4};
  Solution sl;

  auto start = chrono::steady_clock::now();

  // Take the result
  arr = sl.constructLowerArray(arr);

  auto end = chrono::steady_clock::now();

  // Print the result
  for (int it : arr)
    cout << it << " ";

  // See the program runtime
  cout << chrono::duration<double, milli>(end - start).count() << " ms" << endl;

  return 0;
}
