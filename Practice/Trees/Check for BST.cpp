/*
G4G: https://practice.geeksforgeeks.org/problems/check-for-bst/1
Only Wokrs here
*/
class Solution{
	public:
	//Function to check whether a Binary Tree is BST or not.
	int prev = INT_MIN;
	bool isBST(Node* root) 
	{
		// Your code here
		if(root == NULL)
			return true;
		
		if(!isBST(root->left))
			return false;
		
		if(prev >= root->data)
			return false;
		
		prev = root->data;
		return isBST(root->right);
		
	}
};
/*
LC: https://leetcode.com/problems/validate-binary-search-tree/submissions/
Only Wokrs here + Better Solution
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
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL;
        return check(root, prev);
    }
    bool check(TreeNode* node, TreeNode* &prev) {
        if (node == NULL)
			return true;
        
		if (!check(node->left, prev))
			return false;
        
		if (prev != NULL && prev->val >= node->val)
			return false;
        
		prev = node;
        
		return check(node->right, prev);
    }
};