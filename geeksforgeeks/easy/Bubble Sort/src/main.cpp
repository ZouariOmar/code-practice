//! Lance the Doxygen file comment Her (in VSC - `/** */`)

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(void) {
  Solution sl;
  std::vector<int> arr({1, 2, 3, 4, 5});
  sl.bubbleSort(arr);
  for (const int &it : arr)
    std::cout << it << " ";
  return EXIT_SUCCESS;
}