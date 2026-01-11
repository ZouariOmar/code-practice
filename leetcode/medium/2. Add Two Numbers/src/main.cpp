/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-07-2024
 * @link      https://leetcode.com/problems/add-two-numbers
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
  ListNode *ls = new ListNode(1);
  ls->next = new ListNode(2);
  ls->next->next = new ListNode(3);

  ListNode *lss = new ListNode(1);
  lss->next = new ListNode(2);
  lss->next->next = new ListNode(3);

  ListNode *list = sl.addTwoNumbers(ls, lss);

  while (list) {
    cout << list->val << " ";
    list = list->next;
  }

  return 0;
}