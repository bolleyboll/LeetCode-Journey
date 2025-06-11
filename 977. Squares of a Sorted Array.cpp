// LC: https://leetcode.com/problems/squares-of-a-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
// 	vector<int> sortedSquares(vector<int> &nums)
// 	{
// 		vector<int> squares(nums.size());
// 		transform(nums.begin(), nums.end(), squares.begin(), [](int num)
// 				  { return num * num; });
// 		sort(squares.begin(), squares.end());
// 		return squares;
// 	}
// };

class Solution
{
public:
	vector<int> sortedSquares(vector<int> &nums)
	{
		vector<int> res(nums.size());
		int l = 0, r = nums.size() - 1;

		for (int i = nums.size() - 1; i >= 0; i--)
		{
			if (abs(nums[l]) >= abs(nums[r]))
			{
				res[i] = nums[l] * nums[l];
				l++;
			}
			else
			{
				res[i] = nums[r] * nums[r];
				r--;
			}
		}

		return res;
	}
};