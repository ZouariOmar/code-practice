/***************************************************
 * @file      lib.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/roman-to-integer/description
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.h"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief covert roman number to a simple integer
 *
 * @param s
 * @return int
 */
int romanToInt(char* s) {
  int holder[strlen(s)];

  //* covert every roman number to a integer
  for (int i = 0; i < strlen(s); i++) {
    switch (s[i]) {
      case 'I':
        holder[i] = 1;
        break;
      case 'V':
        holder[i] = 5;
        break;
      case 'X':
        holder[i] = 10;
        break;
      case 'L':
        holder[i] = 50;
        break;
      case 'C':
        holder[i] = 100;
        break;
      case 'D':
        holder[i] = 500;
        break;
      case 'M':
        holder[i] = 1000;
        break;
      default:
        break;
    }
  }


  if (strlen(s) == 1)
    return holder[0];

  int result = 0;
  for (int i = 0; i < strlen(s); i++) {
    if (holder[i] < holder[i + 1])
      result -= holder[i];
    else
      result += holder[i];
  }
  return result;
}