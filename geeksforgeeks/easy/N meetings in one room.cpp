/**
 * @file    N meetings in one room.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   N meetings in one room source file
 * @version 0.1
 * @date    2025-06-05
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1?page=2&difficulty=Easy&sortBy=submissions geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <map>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  /**
   * @brief Function to find the maximum number of meetings that can
   * be performed in a meeting room.
   *
   * @param start {std::vector<int>}
   * @param end   {std::vector<int>}
   *
   * @return int
   */
  int maxMeetings(std::vector<int> &start, std::vector<int> &end) {
    std::multimap<int, int> mp;
    for (size_t i{}, len(start.size()); i < len; i++)
      mp.insert({end[i], start[i]});
    int result{}, lastEnd(-1);
    for (std::pair<const int, int> &meet : mp)
      if (meet.second > lastEnd)
        result++, lastEnd = meet.first;
    return result;
  }
}; // Solution class

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
