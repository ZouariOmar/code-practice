//! Lance the Doxygen file comment Her (in VSC - `/**↵`)

//? Include prototype declaration part
#include "lib.cpp"  // #include "lib.c"

//? Main int function prototype dev part

/**
 * @fn         main(int, const char **)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  Solution sl;
  Node *root = new Node(10);
  root->left = new Node(20);
  root->left->left = new Node(40);
  root->left->right = new Node(60);
  std::cout << std::boolalpha <<  sl.isBalanced(root) << '\n';
  return EXIT_SUCCESS;
}