// 704. Binary Search

// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity.
#include <vector>
using namespace std;
class Solution
{
public:
	int search(vector<int> &nums, int target)
	{
		int l = 0, r = nums.size() - 1;
		int mid;
		while (l <= r)
		{
			mid = (l + r) / 2;
			if (nums[mid] == target)
			{
				return mid;
			}
			else if (nums[mid] > target)
			{
				r = mid - 1;
			}
			else
			{
				l = mid + 1;
			}
		}

		return -1;
	}
};