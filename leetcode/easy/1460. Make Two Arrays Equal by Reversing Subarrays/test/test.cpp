/*****************************************************************************
 * @file      test.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      08-08-2024
 * @link      https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include <gtest/gtest.h>

#include "../src/lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief ### The main test function
 * - Using the google test (gtes)
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}

/**
 * @brief Construct a new TEST
 */
TEST(canBeEqual, Test00) {
  vector arr = {1, 2, 3, 4}, target{2, 4, 1, 3};
  ASSERT_EQ(canBeEqual(target, arr), 1);
  arr = {7}, target = {7};
  ASSERT_EQ(canBeEqual(target, arr), 1);
  arr = {3, 7, 9}, target = {3, 7, 11};
  ASSERT_EQ(canBeEqual(target, arr), 0);
}