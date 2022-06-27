/*
G4G: https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1
Tree Identical = Tree Same
*/
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        if(r1 == NULL && r2 == NULL)
            return true;
        if(r1 == NULL || r2 == NULL || r1->data != r2->data)
            return false;
        return isIdentical(r1->left, r2->left) ? isIdentical(r1->right, r2->right) : false;
    }
};