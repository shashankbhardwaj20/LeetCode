#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
class Solution {
public:
    /*
        0 1 5 10 14

        20 75 81 82 95

        20 75 81

        81 82 95
    */
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n<=4) return 0;
        sort(nums.begin(),nums.end());
        ll l=3,r=0; long long mini=1e18;
        while(l>=0){
            mini = min((mini),((nums[n-1-r]-nums[0+l])*1ll));
            l-=1; r+=1;
        }
        return mini;
    }
};