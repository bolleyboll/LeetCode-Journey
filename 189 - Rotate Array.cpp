/*
https://leetcode.com/problems/rotate-array/
*/

// Follow up:

// Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
// Could you do it in-place with O(1) extra space?

#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
	void rotate(vector<int> &nums, int k)
	{ //lets say [1,2,3,4,5,6,7]
		int n = nums.size();
		k = k % n;
		reverse(nums.begin(), nums.end() - k);		 // [4,3,2,1,5,6,7]
		reverse(nums.begin() + (n - k), nums.end()); //[4,3,2,1,7,6,5]
		reverse(nums.begin(), nums.end());			 // [5,6,7,1,2,3,4]
	}
};