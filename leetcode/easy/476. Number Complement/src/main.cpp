/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-08-2024
 * @link      https://leetcode.com/problems/number-complement
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief # The Main Program Function
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  Solution sl;

  cout << sl.findComplement(2147483647) << endl;

  return 0;
}

/*
* Or this solution
class Solution {
public:
    int findComplement(int num) {
        if (num == 0) return 1;

        unsigned int mask = ~0;

        while (num & mask) {
            mask <<= 1;
        }

        return ~mask & ~num;
    }
};
*/