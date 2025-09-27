//! Lance the Doxygen file comment Her (in NVIM - `SPACE+d+h`)

//? Include prototype declaration part
#include <algorithm>
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  void nextPermutation(std::vector<int> &arr) {
    std::next_permutation(arr.begin(), arr.end());
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
