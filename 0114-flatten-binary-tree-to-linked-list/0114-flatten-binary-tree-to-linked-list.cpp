
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        TreeNode*r=root->right;
        TreeNode*l=root->left;
        root->left=NULL;
        root->right=NULL;
        flatten(l);
        flatten(r);
        root->right=l;
        TreeNode*temp=root;
        while(temp->right!=NULL) temp=temp->right;
        temp->right=r;
        
    }
};