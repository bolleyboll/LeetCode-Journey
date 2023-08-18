/*
G4G: https://practice.geeksforgeeks.org/problems/children-sum-parent/1

TC: O(N)
SC: O(log N)
*/
class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
     // Add your code here
     int sum = 0;
     if(root==NULL || (root->left == NULL && root->right == NULL))
     {
         return true;
     }
     else
     {
         if(root->left != NULL)
         {
             sum += root->left->data;
         }
         if(root->right != NULL)
         {
             sum += root->right->data;
         }
     }
     return ((root->data == sum) && isSumProperty(root->left) && isSumProperty(root->right));
     
    }
};