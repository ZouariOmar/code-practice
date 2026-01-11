/***************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  Solution sl;
  ListNode *sll = NULL, *current = sll;
  int array[20] = {0, 3, 1, 0, 4, 5, 2, 0};

  for (int it : array) {
    if (!sll) {
      sll->val = it;
      sll->next = NULL;
      current = current->next;
    } else {
      ListNode *tmp = new ListNode;
      tmp->val = it;
      tmp->next = NULL;
    }
    
        sll = sll->next;
    cout << sll->val << " ";
  }
  cout << "Hello World !" << endl;

  return 0;
}
