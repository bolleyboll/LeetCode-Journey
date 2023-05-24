/*
https://leetcode.com/problems/first-bad-version/
*/

#include <bits/stdc++.h>
using namespace std;
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
	int firstBadVersion(int n)
	{
		int first = 0;
		long int l = 0, r = n, mid;

		while (l <= r)
		{
			mid = (l + r) / 2;
			if (isBadVersion(mid) == true)
			{
				first = mid;
				r = mid - 1;
			}
			else
			{
				l = mid + 1;
			}
		}

		return first;
	}
};