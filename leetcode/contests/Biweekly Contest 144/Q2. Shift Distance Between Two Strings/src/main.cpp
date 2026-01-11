//! Lance the Doxygen file comment Her (in VSC - `/** */`)

//? Include prototype declaration part
#include "lib.cpp"  // #include "lin.c"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @param argc int
 * @param argv char const **
 * @return int
 */
int main(int argc, char const *argv[]) {
  // Declare vars/objs
  Solution sl;
  vector<int> arr({100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0});
  vector<int> brr({1, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0});
  string s = "abab";
  string t = "baba";

  cout << sl.shiftDistance(s, t, arr, brr) << endl;


  return 0;
}