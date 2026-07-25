class Solution {
public:
   void  printsubset( vector<vector<int>>&ans, int idx,vector<int>&v , vector<int>& nums){
    if(idx==nums.size()){
        ans.push_back(v);
        return;
    }
    
     printsubset(ans,idx+1,v,nums);
     v.push_back(nums[idx]);
     printsubset(ans,idx+1,v,nums);
     v.pop_back();

   }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        vector<vector<int>>ans;
        printsubset(ans,0,v,nums);
        return ans;
        
    }
};