/*
G4G: https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1
Tree Identical = Tree Same
***Traversal Not a Valid Approach***
Input
[1,1]
[1,null,1]
Output
true
Expected
false
*/
class Solution {
public:
    void inorder(TreeNode *r, vector<int> &v){ 
        if(r!=NULL){
            inorder(r->left, v);
            v.push_back(r->val);
            inorder(r->right, v);
        }
    }
    void preorder(TreeNode *r, vector<int> &v){
        if(r!=NULL){
            v.push_back(r->val);
            preorder(r->left, v);
            preorder(r->right, v);
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1, v2, v3, v4;
        inorder(p, v1);
        inorder(q, v2);
        preorder(p, v3);
        preorder(q, v4);
            if(v1==v2 && v3==v4){
                return 1;
            }else{
                return 0;
            }
        }
};