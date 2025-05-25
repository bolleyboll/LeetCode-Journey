// LC: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

#include <bits/stdc++.h>
using namespace std;

// Two Pointer solution
// Time complexity: O(n)
// Space complexity: O(1)
// This solution works because the input array is sorted, allowing us to efficiently find the two indices that sum to the target. Follow-up to 1. Two Sum.
class Solution
{
public:
	vector<int> twoSum(vector<int> &numbers, int target)
	{
		int l = 0, r = size(numbers) - 1;
		vector<int> res(2);
		while (l <= r)
		{
			if (numbers[l] + numbers[r] < target)
				l++;
			else if (numbers[l] + numbers[r] > target)
				r--;
			else
			{
				res[0] = l + 1;
				res[1] = r + 1;
				break;
			}
		}
		return res;
	}
};
