/**
 * @file      401. Binary Watch.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     401. Binary Watch source file
 * @version   0.1
 * @date      2026-02-17
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/binary-watch leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>
using namespace std;

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  vector<string> readBinaryWatch(int turnedOn) {
    vector<string> result;

    for (int hour = 0; hour < 12; hour++) {
      for (int minute = 0; minute < 60; minute++) {

        if (__builtin_popcount(hour) + __builtin_popcount(minute) == turnedOn) {

          string time = to_string(hour) + ":";

          if (minute < 10) {
            time += "0";
          }

          time += to_string(minute);

          result.push_back(time);
        }
      }
    }

    return result;
  }
}; // Solution class
