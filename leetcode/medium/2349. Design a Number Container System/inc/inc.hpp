/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-08
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/design-a-number-container-system leetcode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <queue>
#include <unordered_map>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class NumberContainers {
private:
  unordered_map<int, int> m;
  unordered_map<int, priority_queue<int, vector<int>, greater<int>>> d;

public:
  NumberContainers();
  void change(int, int);
  int find(int number);
}; // NumberContainer

#endif // __INC_HPP__