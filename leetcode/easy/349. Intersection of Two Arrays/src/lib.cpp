/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/intersection-of-two-arrays
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

vector<int> Solution::intersection(vector<int>& nums1, vector<int>& nums2) {
  vector<int> res;

  // Sort and rm duplicates from `nums1`
  sort(nums1.begin(), nums1.end());
  nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());

  // Sort and rm duplicates from `nums2`
  sort(nums2.begin(), nums2.end());
  nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());

  // The main fn code
  for (int it : nums1) {
    for (int itt : nums2) {
      if (it == itt) {
        res.push_back(it);
        break;
      }
    }
  }

  return res;
}

/*
* Or this solution
vector<int> Solution::intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> sit;

        for(int i=0;i<nums1.size();i++){
            int element=nums1[i];
            for(int j=0;j<nums2.size();j++){
                if(element==nums2[j]){
                    sit.insert(element);

                    nums2[j]=-1;
                    break;

                }
            }

        }
        for(auto it: sit){
                ans.push_back(it);
            }
        return ans;
    }
 */