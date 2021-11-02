// 189. Rotate Array
// Given an array, rotate the array to the right by k steps, where k is non-negative.

// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
// Example 2:

// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation:
// rotate 1 steps to the right: [99,-1,-100,3]
// rotate 2 steps to the right: [3,99,-1,-100]

// Constraints:

// 1 <= nums.length <= 105
// -231 <= nums[i] <= 231 - 1
// 0 <= k <= 105

// Follow up:

// Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
// Could you do it in-place with O(1) extra space?
#include <vector>
using namespace std;

class Solution
{
public:
	void rotate(vector<int> &nums, int k)
	{
		for (int i = 0; i < k; i++) //O(kn)
		{
			int f = nums[nums.size() - 1];
			for (int j = nums.size() - 2; j >= 0; j--)
			{
				nums[j + 1] = nums[j];
			}
			nums[0] = f;
		}
	}
};

void rotate(vector<int> &nums, int k)
{ //lets say [1,2,3,4,5,6,7]
	int n = nums.size();
	k = k % n;									 // If rotation is greater than array size
	reverse(nums.begin(), nums.end() - k);		 // [4,3,2,1,5,6,7]
	reverse(nums.begin() + (n - k), nums.end()); //[4,3,2,1,7,6,5]
	reverse(nums.begin(), nums.end());			 // [5,6,7,1,2,3,4]
}