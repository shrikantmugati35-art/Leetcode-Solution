
class Solution {
public:
  void inorder(TreeNode*root ,vector<int>&ans){
    if(root==NULL) return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right ,ans);
  }
    vector<int> findMode(TreeNode* root) {
      
        vector<int> ans;
        vector<int> ans2;
        int maxcount=0;
       inorder(root,ans);
        for(int i=0;i<ans.size();){
            int count=1;
            while(i+1 < ans.size() && ans[i]==ans[i+1]){
                count++;
                i++;
            }
            if(count>maxcount){
                maxcount=count;
                ans2.clear();
                ans2.push_back(ans[i]);
            }
             else if(count==maxcount){
             ans2.push_back(ans[i]);
             }
                 i++;
        }

        return ans2;


    }
};