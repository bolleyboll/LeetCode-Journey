/*
https://leetcode.com/problems/squares-of-a-sorted-array/
*/

// Follow up: Squaring each element and sorting the new array is very trivial, could you find an O(n) solution using a different approach?

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	vector<int> sortedSquares(vector<int> &nums)
	{
		int l = 0, r = nums.size() - 1;
		vector<int> res(nums.size());

		int p = r;
		while (l <= r)
		{
			if (abs(nums[l]) > abs(nums[r]))
			{
				res[p] = nums[l] * nums[l];
				l++;
			}
			else
			{
				res[p] = nums[r] * nums[r];
				r--;
			}
			p--;
		}
		return res;
	}
};