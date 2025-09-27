/**
 * @file    Frequencies in a Limited Array.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Frequencies in a Limited Array source file
 * @version 0.1
 * @date    2025-05-14
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/frequency-of-array-elements geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  // Function to count the frequency of all elements from 1 to N in the array.
  std::vector<int> frequencyCount(std::vector<int> &arr) {
    std::vector<int> result(arr.size(), 0);
    for (const int &it : arr)
      result[it - 1]++;
    return result;
  }
}; // Soolution class

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
