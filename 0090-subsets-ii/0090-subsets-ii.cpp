class Solution {
public:
   void print( vector<vector<int>>& ans, vector<int>&temp,int idx,vector<int>& nums){
     ans.push_back(temp);
    for(int i=idx;i<nums.size();i++){
        if(i>idx && nums[i]==nums[i-1]) continue;
        temp.push_back(nums[i]);
        print(ans,temp,i+1,nums);
        temp.pop_back();

    }
   }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
         vector<vector<int>> ans;
         print(ans,temp,0,nums);
         return ans;
    }
};