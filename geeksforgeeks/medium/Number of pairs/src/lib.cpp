/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      25-08-2024
 * @link      https://www.geeksforgeeks.org/problems/number-of-pairs-1587115620/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

long long Solution::countPairs(vector<int> &arr, vector<int> &brr) {
  long long res{};
  long long len1{arr.size()}, len2{brr.size()};
  for (long long i{}; i < len1; i++)
    for (long long j{}; j < len2; j++)
      if (pow(arr[i], brr[j]) > pow(brr[j], arr[i])) res++;
  return res;
}

/*
* worked solution
long long Solution::countPairs(vector<int> &arr, vector<int> &brr) {
  // Your Code goes here.
  long long ans=0;

  sort(arr.begin(),arr.end());
  sort(brr.begin(),brr.end());

  for(auto i:arr){
      if(i!=1){ // do not consider 1 in arr
          ans+=brr.end()-lower_bound(brr.begin(),brr.end(),i+1);
      }
  }
  for(auto i:brr){
      if(i==1){ // consider all bigger elements in arr
          ans+=arr.end()-lower_bound(arr.begin(),arr.end(),i+1);
      }
      else break;
  }
//Special Cases
  ans+=count(arr.begin(),arr.end(),3)*count(brr.begin(),brr.end(),2);
  ans-=count(arr.begin(),arr.end(),2)*count(brr.begin(),brr.end(),3);
  ans-=count(arr.begin(),arr.end(),2)*count(brr.begin(),brr.end(),4);
  return ans;
}
*/