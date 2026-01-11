/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      23-08-2024
 * @link      https://leetcode.com/problems/fraction-addition-and-subtraction/description/?envType=daily-question&envId=2024-08-23
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Given a string expression representing an expression of fraction addition and subtraction, return the calculation result in string format.
 * @param str
 * @return string
 */
string Solution::fractionAddition(string str) {
  // Set the pattern
  std::regex fraction_regex(R"([+-]?\d+/\d+)");

  auto fractions_begin = std::sregex_iterator(str.begin(), str.end(), fraction_regex);
  auto fractions_end = std::sregex_iterator();

  int numerator{}, denominator{1};

  for (auto it = fractions_begin; it != fractions_end; ++it) {
    std::string fraction = (*it).str();

    cout << fraction << endl;

    // Find the '/' position to separate numerator and denominator
    auto slash_pos = fraction.find('/');
    int num = std::stoi(fraction.substr(0, slash_pos));
    int den = std::stoi(fraction.substr(slash_pos + 1));

    // Update the current fraction result
    numerator = numerator * den + num * denominator;
    denominator *= den;
  }

  // Reduce the fraction by finding the greatest common divisor (GCD)
  int gcd = std::gcd(numerator, denominator);
  numerator /= gcd;
  denominator /= gcd;

  return std::to_string(numerator) + "/" + std::to_string(denominator);
}

/*
* Othe solution from LeeCode
class Solution {
public:
    string fractionAddition(string expression) {
        stringstream ss(expression);
        char op;
        int a,b,c,d;
        int num,den;
        ss>>a;ss>>op;ss>>b; //extracting the 1st 2 numbers
        while(ss>>c) //til we have the number
        {
            ss>>op; // op is the operator. which is '/' in our case
            ss>>d;
            num= a*d + b*c;
            den= b*d;
            a= num/__gcd(abs(num),abs(den));
            b= den/__gcd(abs(num),abs(den));
        }
        c=__gcd(abs(a),abs(b));
        a=a/c;
        b=b/c;
        return to_string(a)+'/'+to_string(b);
    }
};
*/