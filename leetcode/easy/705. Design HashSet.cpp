/**
 * @file      705. Design HashSet.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     705. Design HashSet source file
 * @version   0.1
 * @date      08/04/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/design-hashset leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class MyHashSet {
private:
  std::vector<bool> set;

public:
  MyHashSet() {
    set.resize(1000001);
  }

  void add(int key) {
    set[key] = true;
  }

  void remove(int key) {
    set[key] = false;
  }

  bool contains(int key) {
    return set[key];
  }
}; // MyHashSet class

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
