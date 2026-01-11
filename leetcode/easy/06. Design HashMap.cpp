/**
 * @file      706. Design HashMap.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     706. Design HashMap source file
 * @version   0.1
 * @date      08/06/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/design-hashmap leetcode @endlink
 */
//? Include prototype declaration part
#include <bitset>
#include <iostream>

//? Function(s)/Class(es) prototype dev part
class MyHashMap {
private:
  int map[1000001];
  std::bitset<1000001> b;

public:
  MyHashMap() {};

  void put(int key, int value) {
    map[key] = value;
    b.set(key);
  }

  int get(int key) {
    if (b.test(key))
      return map[key];
    return -1;
  }

  void remove(int key) {
    map[key] = 0;
    b.reset(key);
  }
}; // MyHashMap class

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
