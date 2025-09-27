/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      11-08-2024
 * @link      https://www.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Given a set of n jobs where each jobi has a deadline and profit associated with it. Each job takes 1 unit of time to complete and only one job can be scheduled at a time. We earn the profit associated with a job if and only if the job is completed by its deadline.
 * *
 * - Find the number of jobs done and the maximum profit.
 * *
 * - Note: Jobs will be given in the form (Jobid, Deadline, Profit) associated with that Job. Deadline of the job is the time on or before which job needs to be completed to earn the profit.
 * @param arr
 * @param n
 * @return vector<int>
 */
vector<int> Solution::JobScheduling(Job *arr, int n) {
  // Sort jobs by decreasing order of profit
  sort(arr, arr + n, [](Job &a, Job &b) {
    return a.profit > b.profit;
  });

  // Find the maximum deadline to create time slots
  int max_deadline = 0;
  for (int i = 0; i < n; i++) {
    max_deadline = max(max_deadline, arr[i].dead);
  }

  // Array to keep track of free time slots
  vector<int> slot(max_deadline + 1, -1);

  // Variables to store the count of jobs and maximum profit
  int job_count = 0;
  int max_profit = 0;

  // Iterate over all jobs
  for (int i = 0; i < n; i++) {
    // Find a free slot for this job (starting from the last possible slot)
    for (int j = arr[i].dead; j > 0; j--) {
      if (slot[j] == -1) {
        slot[j] = i;  // Assign this job to the slot
        job_count++;
        max_profit += arr[i].profit;
        break;
      }
    }
  }

  return {job_count, max_profit};
}