// LC: https://leetcode.com/problems/frequency-of-the-most-frequent-element/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long long sum=0, L=0, R=0;
        long long res=0;

        sort(nums.begin(), nums.end());
        
        while(R < nums.size()){
            sum+=nums[R];
            while(nums[R]*(R-L+1) > sum + k){
                sum-=nums[L];
                L++;
            }
            res = max(res, (R-L+1));
            R++;
        }
        
        return res;
    }
};