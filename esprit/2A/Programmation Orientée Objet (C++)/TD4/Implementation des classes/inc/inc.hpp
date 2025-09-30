/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-13
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1579548_1?courseId=_4241_1&view=content TD4 @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

// ? Struct declaration part
struct Date {
  int dd, mm, yyyy;
}; // Date struct

// ? Enum declaration part
enum STARS {
  ONE_STAR = 1,
  TWO_STARS,
  THREE_STARS,
  FOUR_STARS,
  FIVE_STARS
};

// ? Class prototype declaration part
class Accommodation {
private:
  string address,
      hotel_name;
  STARS stars;

public:
  Accommodation();
  Accommodation(string, string, STARS);
}; // Accommodation class

class Travel {
private:
  int id;
  string originState, destinationState,
      name;
  float price;
  Date begin_date, end_date;
  Accommodation acc;

  public:
    Travel(int, string, string, string, Date, Date, float, Accommodation);
}; // Travel class

#endif // __INC_HPP__