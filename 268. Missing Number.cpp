// LC: https://leetcode.com/problems/missing-number/

#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size(), res=-1;
//         map<int,int> mp;
        
//         for(auto it: nums){
//             mp[it]=1;
//         }
//         while(n>=0){
//             if(mp[n] == 0)
//                 res=n;
//             n--;
//         }
//         return res;
//     }
// };

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        for(auto it: nums){
            sum-=it;
        }
        return sum;
    }
};