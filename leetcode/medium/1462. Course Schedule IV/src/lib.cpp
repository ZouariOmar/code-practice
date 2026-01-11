/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-27
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/course-schedule-iv leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return a boolean array answer, where answer[j] is the answer to the jth query.
 *
 * @param numCourses    int
 * @param prerequisites {vector<vector<int>> &}
 * @param queries       {vector<vector<int>> &}
 * @return vector<bool>
 */
vector<bool> Solution::checkIfPrerequisite(int numCourses, vector<vector<int>> &prerequisites, vector<vector<int>> &queries) {
  // Step 1: Initialize the reachability map
  unordered_map<int, unordered_set<int>> reachable;

  // Step 2: Build direct reachability chains
  for (auto &prereq : prerequisites)
    reachable[prereq[1]].insert(prereq[0]);

  // Step 3: Propagate reachability to account for indirect prerequisites
  for (int i = 0; i < numCourses; ++i)
    for (int j = 0; j < numCourses; ++j)
      if (reachable[j].count(i))
        reachable[j].insert(reachable[i].begin(), reachable[i].end());

  // Step 4: Answer the queries
  vector<bool> result;
  for (vector<int> &query : queries)
    result.push_back(reachable[query[1]].count(query[0]) > 0);

  return result;
}