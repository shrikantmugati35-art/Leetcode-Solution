class Solution {
public:
     void helper(vector<int>& nums, vector<int>&ans ,vector<vector<int>>&finans,int i){
        if( i==nums.size()){
            finans.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        helper(nums,ans,finans,i+1);
        ans.pop_back();
         helper(nums,ans,finans,i+1);
     }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
         vector<vector<int>> finans;
         helper(nums,ans,finans,0);
         return finans;
    }
};