/*
G4G: https://practice.geeksforgeeks.org/problems/symmetric-tree/1
*/
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool mirrorCheck(Node *left, Node *right){
        if(left==NULL && right==NULL)
            return true;
        else if(left==NULL || right==NULL)
            return false;
        
        if(left->data!=right->data)
            return false;
        
        return mirrorCheck(left->left, right->right) && mirrorCheck(left->right, right->left);
    }
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    if(root == NULL)
	        return true;
	    return mirrorCheck(root->left, root->right);
    }
};