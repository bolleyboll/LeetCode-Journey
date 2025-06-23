// LC: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
private:
	vector<int> nums;

public:
	void inorderTraversal(TreeNode *curr)
	{
		if (!curr)
			return;

		inorderTraversal(curr->left);
		nums.push_back(curr->val);
		inorderTraversal(curr->right);
	}
	bool findTarget(TreeNode *root, int k)
	{
		inorderTraversal(root);
		int l = 0, r = nums.size() - 1;

		while (l < r)
		{
			int sum = nums[l] + nums[r];
			if (sum == k)
			{
				return true;
			}
			else if (sum > k)
			{
				r--;
			}
			else
			{
				l++;
			}
		}
		return false;
	}
};
