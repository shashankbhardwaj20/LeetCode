// Find the Maximum Length of Valid Subsequence 2
// similar to lis 
/*
  rem  1  4 2 3 1 4  , k=3
  0    0  0 1
  1    0  0 0
  2    0  1 0
  => here 1 shows we have an element other than that before it.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(k,0));
        int maxi=0;
        for(int i=1;i<n;++i){
            for(int j=0;j<i;++j){
                int mod = (nums[i]+nums[j])%k;
                dp[i][mod] = max((dp[i][mod]),(dp[j][mod]+1));
                maxi=max(maxi,dp[i][mod]);
            }
        }
        return maxi+1;
    }

};