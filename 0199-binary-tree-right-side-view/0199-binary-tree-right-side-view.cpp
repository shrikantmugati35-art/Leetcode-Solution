
class Solution {
public:
   int level(TreeNode*root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
   }
    void preorder(TreeNode* root,vector<int>&ans ,int levels){
        if(root==NULL) return ;
        ans[levels]=root->val;
        preorder(root->left ,ans,levels+1);
        preorder(root->right ,ans,levels+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans(level(root),0);
      preorder(root ,ans,0);
        return ans; 
    }
};