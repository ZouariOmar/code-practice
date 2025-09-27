/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-08-2024
 * @link      https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief # The Main Program Function
 * ! Have Some bugs
 * @return int 
 */
int main(int argc, char const *argv[]) {
  //* principal vars declaration part
  vector<int> val = {1, 2, 3}, wt = {4, 5, 3};

  Solution sl;

  cout << sl.knapSack(4, wt, val) << endl;

  return 0;
}

/*
* this solution work properly
vector<vector<int>>dp;
int fun(int i, int w, vector<int>& wt, vector<int>& val) {
  if(i>=wt.size()){return 0;}
  if(dp[i][w]!=-1){return dp[i][w];}
  int ans=0;
  if(w>=wt[i])
    ans=max(ans,val[i]+fun(i+1, w-wt[i], wt, val));

  ans=max(ans, fun(i+1, w, wt, val));
  return dp[i][w]=ans;
}

int knapSack(int W, vector<int>& wt, vector<int>& val) {
    dp.resize(wt.size()+1, vector<int>(W+1, -1));
    return fun(0, W, wt, val);
}

* solution 2
int Solution::knapSack(int W, vector<int>& wt, vector<int>& val) {
    int n = wt.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            if (wt[i - 1] <= w) {
                dp[i][w] = max(dp[i - 1][w], val[i - 1] + dp[i - 1][w - wt[i - 1]]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W];
}

*/