/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-08-2024
 * @link      https://leetcode.com/problems/combination-sum
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief
 *
 * @param candidates
 * @param target
 * @return vector<vector<int>>
 */
vector<vector<int>> Solution::combinationSum(vector<int> &candidates, int target) {
  vector<int> comb;
  makeCombination(candidates, target, 0, comb, 0);
  return res;
}

void Solution::makeCombination(vector<int> candidates, int target, int idx, vector<int> &comb, int total) {
  if (total == target) {
    res.push_back(comb);
    return;
  }

  if (total > target || idx >= candidates.size()) {
    return;
  }

  comb.push_back(candidates[idx]);
  makeCombination(candidates, target, idx, comb, total + candidates[idx]);
  comb.pop_back();
  makeCombination(candidates, target, idx + 1, comb, total);
}

/*
* Other solution
class Solution {
public:
  void helper(int idx,vector<int>& candidates,int target,vector<vector<int>>&ans,vector<int> &ds){
    if(idx == candidates.size()){
        if(target == 0){
          ans.push_back(ds);
        }
        return;
    }
    if(candidates[idx]<=target){
        ds.push_back(candidates[idx]);
        helper(idx,candidates,target-candidates[idx],ans,ds);
        ds.pop_back();
    }
    helper(idx+1,candidates,target,ans,ds);
  }

  vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>> ans;
      vector<int> ds;
      helper(0,candidates,target,ans,ds);
      return ans;
  }
};

* Other solution
class Solution {
public:
  vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>> ans;
      vector<int> current_vector;
      DFS(ans,current_vector,candidates,0,0,target);
      return ans;
  }
  void DFS(vector<vector<int>> &ans, vector<int> &current_vector, vector<int> &candidates, int current_total, int i, int target){
      if(i==candidates.size()||current_total>target)
          return;
      else if(current_total==target){
          ans.push_back(current_vector);
          return;
      }
      else{
          current_vector.push_back(candidates[i]);
          DFS(ans,current_vector,candidates,current_total+candidates[i],i,target);
          current_vector.pop_back();
          DFS(ans,current_vector,candidates,current_total,i+1,target);
          return;
      }
  }
};
*/
