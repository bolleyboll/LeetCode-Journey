// LC: https://leetcode.com/problems/two-sum-bsts/description/

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

// Working Map Solution, need to understand why others are using Set
class Solution
{
private:
    unordered_map<long long, int> tree1, tree2;

public:
    void inorderTraversal(TreeNode *curr, unordered_map<long long, int> &mp)
    {
        if (!curr)
            return;

        inorderTraversal(curr->left, mp);
        if (mp.find(curr->val) != mp.end())
        {
            mp[curr->val]++;
        }
        else
        {
            mp[curr->val] = 1;
        }
        inorderTraversal(curr->right, mp);
    }
    bool twoSumBSTs(TreeNode *root1, TreeNode *root2, int target)
    {
        inorderTraversal(root1, tree1);
        inorderTraversal(root2, tree2);

        for (auto it : tree1)
        {
            long comp = target - it.first;
            if (comp != it.first)
            {
                if (tree2.find(comp) != tree2.end())
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
