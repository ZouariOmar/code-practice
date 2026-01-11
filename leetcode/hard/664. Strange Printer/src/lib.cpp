/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      21-08-2024
 * @link      https://leetcode.com/problems/strange-printer
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief
 * ! Not work in sub tests
 * @param s
 * @return int
 */
int Solution::strangePrinter(string s) {
  sort(s.begin(), s.end());

  int res{1};

  size_t len{s.size()};
  for (size_t i{}; i < len - 1; i++)
    if (s[i] != s[i + 1]) res++;

  return res;
}

/*
* ext solution
class Solution {
public:
    int n=1;
    array<vector<int>, 26> alphabet;
    void shorten(string& s){
        int sz=s.size();
        // Use 2 pointer to remove successive duplicates
        char cur;
        for(int l=0, r=1; r<sz; r++){
            cur=s[r];
            while(l<r && s[l]==cur) l++;
            if (r<sz && s[l]!=cur){
                alphabet[cur-'a'].push_back(n);
                s[n++]=cur;
                l=r;
            }
        }
        s.resize(n);// s is shortened
    //    cout<<s<<endl;
    }
    int strangePrinter(string& s) {
        shorten(s);
    //    cout<<n<<", shorten s="<<s<<endl;
        int dp[101][101]={0};
        for(int i=n-1; i>=0; i--){// backward
            dp[i][i]=1;// base case;
            for(int j=i+1; j<n; j++){// forward
                int x=dp[i][j-1];
                if (s[i]==s[j]){
                    dp[i][j]=x;
                    continue;
                }
                x++;
                if (j-i<=5){
                    for(int k=i+1; k<j-1; k++){
                        if (s[k]==s[j]){
                            x=min(x, dp[i][k-1]+dp[k][j-1]);
                            k++;// no successive duplicates
                        }
                    }
                }
                else{
                    auto& K=alphabet[s[j]-'a'];
                    int l=lower_bound(K.begin(), K.end(), i+1)-K.begin();
                //    cout<<j<<"->"<<s[j]<<" l="<<l<<", K[l]="<<K[l]<<endl;
                    for (int k=l; k<K.size() && K[k]<j-1; k++) {
                        x=min(x, dp[i][K[k]-1]+dp[K[k]][j-1]);
                    }
                }
                dp[i][j]=x;
            }
        }
        return dp[0][n-1];
    }
};*/