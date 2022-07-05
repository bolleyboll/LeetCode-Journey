/*
G4G: https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1
LC: https://leetcode.com/problems/balanced-binary-tree/

TC: O(N)
SC: O(N)
*/
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int ht(Node *root){
        if(root == NULL)
            return 0;
        
        int l = ht(root->left);
        if(l == -1)
            return -1;
        
        int r = ht(root->right);
        if(r == -1)
            return -1;
        
        if (abs(l - r) > 1)
            return -1;
        return 1 + max(l, r);
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        return ht(root) != -1;
    }
};