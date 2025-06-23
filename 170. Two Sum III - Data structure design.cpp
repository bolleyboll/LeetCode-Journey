// LC: https://leetcode.com/problems/two-sum-iii-data-structure-design/description/

#include <bits/stdc++.h>
using namespace std;

// This solution isn't accepted but it is logically sound.
// class TwoSum
// {
// private:
// 	vector<int> nums;

// public:
// 	TwoSum()
// 	{
// 	}

// 	void add(int number)
// 	{
// 		nums.push_back(number);
// 	}

// 	bool find(int value)
// 	{
// 		int l = 0, r = size(nums) - 1;
// 		sort(nums.begin(), nums.end());
// 		while (l <= r)
// 		{
// 			if (nums[l] + nums[r] < value)
// 				l++;
// 			else if (nums[l] + nums[r] > value)
// 				r--;
// 			else
// 			{
// 				return true;
// 			}
// 		}
// 		return false;
// 	}
// };

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */

class TwoSum
{
private:
	unordered_map<long, int> nums;

public:
	TwoSum()
	{
	}

	void add(int number)
	{
		if (nums.find(number) != nums.end())
		{
			nums[number]++;
		}
		else
		{
			nums[number] = 1;
		}
	}

	bool find(int value)
	{
		for (auto it : nums)
		{
			long comp = value - it.first;
			if (comp != it.first)
			{
				if (nums.find(comp) != nums.end())
				{
					return true;
				}
			}
			else
			{
				if (it.second > 1)
				{
					return true;
				}
			}
		}
		return false;
	}
};
