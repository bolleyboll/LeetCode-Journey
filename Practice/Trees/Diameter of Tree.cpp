/*
G4G: https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1#
Leetcode: https://leetcode.com/problems/diameter-of-binary-tree/submissions/
*/
class Solution {
  public:
    int dia(Node* root, int &max_dia){
        if(root == NULL)
            return 0;
        
        int lh = dia(root->left, max_dia);
        int rh = dia(root->right, max_dia);
        
        int temp = 1 + max(lh, rh);
        int ans = max(temp, 1 + lh + rh);
        max_dia = max(max_dia, ans);
        
        return temp;
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        int result = 0;
        dia(root, result);
        return result;			//Def if diameter is defined as number of nodes, then just return (result). if it is defined as number of edges then return (result-1)
    }
};