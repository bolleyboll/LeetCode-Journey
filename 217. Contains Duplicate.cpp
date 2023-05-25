/*
https://leetcode.com/problems/contains-duplicate/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int n: nums){
            if(mp[n] == 0)
                mp[n] = 1;
            else
                return true;
        }
        return false;
    }
};