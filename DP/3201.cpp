#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    /*
        even even even
        even odd even 
        
        odd odd odd
        odd even odd 


        1 3 
        2 4 
        even ... odd even odd even .....

        1 1 1 1 
        2 2 2

        1 2 1 2 1 
    */
    int maximumLength(vector<int>& nums) {
        // 0 - odd 1-even
        int n = nums.size();
        bool polarity = (nums[0]%2!=0);
        int odd_len=0,even_len=0;
        for(int i=0;i<n;++i){
            even_len += (nums[i]%2==0);
        }
        for(int i=0;i<n;++i){
            odd_len += (nums[i]%2!=0);
        }
        int ele = nums[0]; int size=1;
        for(int i=1;i<n;++i){
            if((nums[i]%2!=0) == polarity) continue;
            else {
                size += 1;
                ele = nums[i];
                polarity = (nums[i]%2!=0);
            }
        }
        // cout<<size<<endl<<odd_len<<endl<<even_len<<endl;
        return max((size),max(odd_len,even_len));
    }
};