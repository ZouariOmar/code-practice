/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------
class lib {
 public:
  int minDays(vector<int>& bloomDay, int m, int k) {
    if ((long long)m * k > bloomDay.size()) {
      return -1;
    }

    int low = 1, high = 1e9;
    while (low < high) {
      int mid = low + (high - low) / 2;

      if (canMakeBouquets(bloomDay, m, k, mid)) {
        high = mid;
      } else {
        low = mid + 1;
      }
    }

    return low;
  }

 private:
  bool canMakeBouquets(vector<int>& bloomDay, int m, int k, int day) {
    int total = 0;
    for (int i = 0; i < bloomDay.size(); i++) {
      int count = 0;
      while (i < bloomDay.size() && count < k && bloomDay[i] <= day) {
        count++;
        i++;
      }

      if (count == k) {
        total++;
        i--;
      }

      if (total >= m) {
        return true;
      }
    }

    return false;
  }
};