/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      27-08-2024
 * @link      https://www.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency-1587115621/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

vector<int> Solution::sortByFreq(vector<int> &arr) {
  sort(arr.begin(), arr.end(), [arr](int a, int b) {
    int cnt1 = count(arr.begin(), arr.end(), a), cnt2 = count(arr.begin(), arr.end(), b);
    if (cnt1 > cnt2)
      return true;
    else if (cnt1 == cnt2)
      return a < b;
    return false;
  });

  return arr;
}

/*
* Other Solution
vector<int> sortByFreq(vector<int>& arr) {
  unordered_map<int, int>mp;
  for(auto &b: arr) mp[b]++;

  vector<pair<int, int>>vp;
  for(auto &b: mp) vp.push_back({b.second, b.first});
  sort(vp.begin(), vp.end(),[&](pair<int, int>a, pair<int, int>b){
      if(a.first==b.first){return a.second<b.second;}
      return a.first>b.first;
  });
  vector<int>ans;
  for(auto &b: vp){
      int a=b.first, bb=b.second;
      while(a--){ans.push_back(bb);}
  }
  return ans;
}
*/