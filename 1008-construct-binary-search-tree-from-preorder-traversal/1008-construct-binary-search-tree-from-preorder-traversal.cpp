
class Solution {
public:

    TreeNode* insertbst(TreeNode* root, int val){
        if(root==NULL) return new TreeNode(val);
        if(val < root->val){
            root->left= insertbst(root->left ,val);
        }
        else root->right=insertbst(root->right ,val);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& pre) {
         if(pre.empty()) return NULL;
          TreeNode*temp=new TreeNode(pre[0]);
          for(int i=1;i<pre.size();i++){
            insertbst(temp,pre[i]);
          }
          return temp;
    }
};