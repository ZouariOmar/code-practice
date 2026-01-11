/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/number-of-atoms
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @author chatGPT
 * @brief Return the count of all elements as a string in the following form: the first name (in sorted order),
 * followed by its count (if that count is more than 1), followed by the second name (in sorted order),
 * followed by its count (if that count is more than 1), and so on.
 * @param formula
 * @return string
 */
string Solution::countOfAtoms(string formula) {
  int n = formula.size();
  int i = 0;
  stack<unordered_map<string, int>> stk;
  unordered_map<string, int> currentMap;

  while (i < n) {
    if (formula[i] == '(') {
      stk.push(currentMap);
      currentMap.clear();
      i++;
    } else if (formula[i] == ')') {
      i++;
      int start = i;
      while (i < n && isdigit(formula[i])) i++;
      int multiplier = start < i ? stoi(formula.substr(start, i - start)) : 1;

      unordered_map<string, int> tempMap = currentMap;
      currentMap = stk.top();
      stk.pop();

      for (auto& pair : tempMap) {
        currentMap[pair.first] += pair.second * multiplier;
      }
    } else {
      int start = i;
      i++;
      while (i < n && islower(formula[i])) i++;
      string element = formula.substr(start, i - start);

      start = i;
      while (i < n && isdigit(formula[i])) i++;
      int count = start < i ? stoi(formula.substr(start, i - start)) : 1;

      currentMap[element] += count;
    }
  }

  map<string, int> sortedMap(currentMap.begin(), currentMap.end());
  string result;

  for (auto& pair : sortedMap) {
    result += pair.first;
    if (pair.second > 1) {
      result += to_string(pair.second);
    }
  }

  return result;
}