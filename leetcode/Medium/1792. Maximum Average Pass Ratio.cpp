/**
 * @file      1792. Maximum Average Pass Ratio.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     1792. Maximum Average Pass Ratio source file
 * @version   0.1
 * @date      01/09/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/maximum-average-pass-ratio leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <queue>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  double maxAverageRatio(std::vector<std::vector<int>> &classes, int extraStudents) {
    auto profit = [](const unsigned int &pass, const unsigned int &total) -> const double {
      return (double)(pass + 1) / (total + 1) - (double)pass / total;
    };

    std::priority_queue<std::pair<double, size_t>> pq;
    for (size_t i{}; i < classes.size(); ++i) {
      pq.push({profit(classes[i][0], classes[i][1]), i});
    }

    for (size_t i{}; i < extraStudents; ++i) {
      auto [gain, idx] = pq.top();
      pq.pop();
      pq.push({profit(++classes[idx][0], ++classes[idx][1]), idx});
    }

    double sum{};
    for (const std::vector<int> &c : classes)
      sum += (double)c[0] / c[1];

    return sum / classes.size();
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
