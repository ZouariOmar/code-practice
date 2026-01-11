//! Lance the Doxygen file comment Her (in VSC - `/** */`)

//? Include prototype declaration part
#include "lib.cpp"  // #include "lin.c"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main(int argc, char const *argv[]) {
  // Declare vars/objs
  Solution sl;
  vector<int> arr({-20, 8, -6, -14, 0, -19, 14, 4});
  cout << boolalpha << sl.checkIfExist(arr) << endl;
  for (int &it : arr)
    cout << it << " ";

  return 0;
}