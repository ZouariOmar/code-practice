/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-25
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/remove-sub-folders-from-the-filesystem leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the folders after removing all sub-folders in those folders. You may return the answer in any order.
 * @param folder vector<string> &
 * @return vector<string>
 */
vector<string> Solution::removeSubfolders(vector<string> &folder) {
  sort(folder.begin(), folder.end());  // Sort the folders lexicographically so parent folders come before their subFolders
  vector<string> ans(1, folder[0]);
  size_t len{folder.size()};
  for (size_t i{1}; i < len; i++) {
    string lastFolder{ans.back()};
    lastFolder.push_back('/');
    if (folder[i].compare(lastFolder))
      ans.push_back(folder[i]);
  }
  return ans;
}