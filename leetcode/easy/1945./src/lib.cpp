/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      03-09-2024
 * @link      https://leetcode.com/problems/sum-of-digits-of-string-after-convert
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

int Solution::getLucky(string s, int k) {
  // Convert each character in the string to its corresponding numeric value
  string number = "";
  for (char x : s)
    number += to_string(x - 'a' + 1);

  // Perform the transformation `k` times
  while (k--) {
    int temp{};

    for (char x : number)
      temp += x - '0';  // Sum the digits of the current number

    number = to_string(temp);  // Convert the sum back to a string
  }

  return stoi(number);  // Return the final result as an integer
}

/*
* My first solution
class Solution {
public:
    int sumDigits(int num) {
        int sum{};
        while(num) {
            sum += num%10;
            num /= 10;
        }
        return sum;
    }

    int getLucky(string s, int k) {
        int sum{};
        for(auto it: s){
            int value = it - 'a' + 1;
            if(value>=10)
                sum+= value%10 + value/10;
            else
                sum = sum + value;
        }

        k--;                    //since I did the sum once;
        while(k-- && sum>=10)   //furthur trasformations starts here
            sum = sumDigits(sum);
        return sum;
    }
};
*/