
class Solution {
public:
    void helper(TreeNode* root ,  vector<int>&ans){
        if(root==NULL) return;
        helper(root->left  ,ans);
        ans.push_back(root->val);
        helper(root->right ,ans);
    }
 
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>ans;
        helper(root,ans);
        TreeNode* dummy=new TreeNode(0);
        TreeNode* curr=dummy;
        for( int val:ans){
            curr->right=new TreeNode(val);
            curr=curr->right;
        }
        return dummy->right;
        
    }
};