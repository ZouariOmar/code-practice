/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/letter-combinations-of-a-phone-number
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.
 *
 * @param digits
 * @return vector<string>
 */
vector<string> Solution::letterCombinations(string digits) {
  if (digits.empty()) return {};

  unordered_map<char, string> um = {
      {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};

  vector<string> result;
  string current;
  backtrack(digits, um, 0, current, result);
  return result;
}

/**
 * @brief 
 * 
 * @param digits 
 * @param um 
 * @param index 
 * @param current 
 * @param result 
 */
void Solution::backtrack(const string& digits, unordered_map<char, string>& um, int index, string& current, vector<string>& result) {
  if (index == digits.size()) {
    result.push_back(current);
    return;
  }

  char digit = digits[index];
  const string& letters = um[digit];
  for (char letter : letters) {
    current.push_back(letter);
    backtrack(digits, um, index + 1, current, result);
    current.pop_back();
  }
}
