/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      22-09-2024
 * @link      https://leetcode.com/problems/merge-sorted-array
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Merge 2 sorted array in non-decreasing order
 * @param nums1 vector<int>
 * @param m int
 * @param nums2 vector<int>
 * @param n int
 */
void Solution::merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  copy(nums2.begin(), nums2.end(), nums1.begin() + m);
  sort(nums1.begin(), nums1.end());
}

/*
* Other solution
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n -1;

        while(i >= 0 && j >= 0){
            if(nums1[i] >= nums2[j]){
                nums1[k] = nums1[i];
                i--;
            }else{
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        while(j >= 0){
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
*/