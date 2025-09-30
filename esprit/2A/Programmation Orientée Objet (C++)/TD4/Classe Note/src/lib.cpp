/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-13
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1579548_1?courseId=_4241_1&view=content TD4 @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Notes::Notes object
 */
Notes::Notes()
    : test1(0), test2(0), DS(0), Exam(0), oral(0), TP(0), withTP(true) {
}

/**
 * @brief ### Construct a new Notes::Notes object
 *
 * @param a float
 * @param b float
 * @param c float
 * @param d float
 * @param e float
 * @param f float
 */
Notes::Notes(float a, float b, float c, float d, float e, float f)
    : test1(a), test2(b), DS(c), Exam(d), oral(e), TP(f), withTP(true) {
}

/**
 * @brief ### Construct a new Notes::Notes object
 *
 * @param a float
 * @param b float
 * @param c float
 * @param d float
 * @param e float
 * @param f float
 */
Notes::Notes(float a, float b, float c, float d, float e)
    : test1(a), test2(b), DS(c), Exam(d), oral(e), withTP(false) {
}

/**
 * @brief ### Calculate the CC note
 *
 * @return float
 */
float Notes::calcNCC() {
  return (test1 + test2 + oral + 2 * DS) / 5;
}

float Notes::calcMoy() {
  return (withTP) ? (0.3 * calcNCC()) + (0.2 * TP) + (0.5 * Exam) : (0.4 * calcNCC()) + (0.6 * Exam);
}

/**
 * @brief ### Return true if `this->notes.calcMoy()` greater than `n.calcMoy()`
 *
 * @param n {const Notes &}
 * @return bool
 */
bool Notes::operator>(const Notes &n) {
  Notes N(n);
  return calcMoy() > N.calcMoy();
}

/**
 * @brief ### Return true if `this->notes.calcMoy()` less than `n.calcMoy()`
 *
 * @param n {const Notes &}
 * @return bool
 */
bool Notes::operator<(const Notes &n) {
  Notes N(n);
  return calcMoy() < N.calcMoy();
}
