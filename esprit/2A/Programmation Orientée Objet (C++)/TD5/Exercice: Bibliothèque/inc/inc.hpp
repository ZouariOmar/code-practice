/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-27
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1615828_1?courseId=_4241_1&view=content TD5 @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

// ? Class prototype declaration part
class Book {
private:
  unsigned int code, // Book Code
      example_nbr;   // Book examples numbers
  float price;       // Book price
  std::string title;

public:
  Book();
  Book(const std::string, const unsigned int, const float);
  void showAll();
  double get_total();
}; // Book class
#endif // __INC_HPP__