/*
G4G: https://practice.geeksforgeeks.org/problems/array-to-bst4443/1
*/
class Solution {
public:
    void preorder(vector<int> &nums,int i,int j,vector<int> &v){
        if(i<=j){
            int mid=(i+j)/2;
            v.push_back(nums[mid]);
            preorder(nums,i,mid-1,v);
            preorder(nums,mid+1,j,v);
        }
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int> v;
        int i=0,j=nums.size()-1;
        preorder(nums,i,j,v);
        return v;
    }
};
/*
LC: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
Better Solution
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* helper(vector<int>& nums, int start, int end){
        if(end <= start)
            return nullptr;
        int mid = (start + end)/2;
        
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = helper(nums, start, mid);
        root->right = helper(nums, mid+1, end);
        
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty())
            return nullptr;
        return helper(nums, 0, nums.size());
    }
};