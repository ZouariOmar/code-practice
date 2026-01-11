/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      dd-mm-yyyy
 * @link      NONE
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

int Solution::countConsistentStrings(string allowed, vector<string> &words) {
  regex pattern("^[" + allowed + "]+$");
  int res{};

  size_t len{words.size()};
  for (string word : words)
    if (regex_match(word, pattern))
      res++;
  return res;
}

/*
* Other Solution
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        ios_base::sync_with_stdio(false);
        vector<int>freq(26,0);
        for(char c : allowed) freq[c-'a']=1;
        int count=0;
        for(auto s : words) {
            char found=true;
            for(char c : s){
                if(freq[c-'a']!=1) {
                    found =false;
                    break;
                }
            }
            if(found) count++;
        }
        return count;
    }
};
*/