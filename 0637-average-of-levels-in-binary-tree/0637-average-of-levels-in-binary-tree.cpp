
class Solution {
public:

    vector<double> averageOfLevels(TreeNode* root) {
         vector<double> ans;
         queue<TreeNode*>q;
         q.push(root);
         while(q.size()>0){
            int n=q.size();
            double sum=0;
            for(int i=0;i<n;i++){
                TreeNode*temp=q.front();
                 q.pop();   
                 sum+=temp->val;
            if(temp->left!=NULL) q.push(temp->left);
             if(temp->right!=NULL) q.push(temp->right);
            }
             ans.push_back(sum/n);
            

         }
         return ans;


    }
};