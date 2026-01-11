/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-24
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/count-days-without-meetings leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the count of days when the employee is available for work but no meetings are scheduled
 *
 * @class          Solution
 * @param days     int
 * @param meetings {std::vector<std::vector<int>> &}
 * @return         int
 */
int Solution::countDays(int days, std::vector<std::vector<int>> &meetings) {
  std::sort(meetings.begin(), meetings.end());
  int meetingDaysCount{}, currentStart{-1}, currentEnd{-1};
  for (const std::vector<int> &meeting : meetings) {
    int start = meeting[0], end = meeting[1];
    if (start > currentEnd) {
      if (currentEnd != -1)
        meetingDaysCount += currentEnd - currentStart + 1;
      currentStart = start;
      currentEnd = end;
    } else
      currentEnd = std::max(currentEnd, end);
  }
  if (currentEnd != -1) 
    meetingDaysCount += currentEnd - currentStart + 1;
  return days - meetingDaysCount;
}