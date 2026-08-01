class Solution {
public:
    void combination(vector<vector<int>> &ans, vector<int>v,vector<int>& c, int t ,int idx){
        if(t==0){
            ans.push_back(v);
            return;
        }
        if(t<0) return;
        for(int i=idx;i<c.size();i++){
            v.push_back(c[i]);
            combination(ans,v,c,t-c[i],i);
            v.pop_back();
        }

    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>>ans;
        vector<int>v;
        combination(ans,v,c,t ,0); 
        return ans;
    }
};