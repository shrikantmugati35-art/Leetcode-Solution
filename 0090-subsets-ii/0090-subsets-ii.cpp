class Solution {
public:
   void getsubset(vector<int>& nums,  vector<int>&ans, vector<vector<int>>&finalans,int i){
    if( i==nums.size()){
        finalans.push_back(ans);
        return;
    }

    ans.push_back(nums[i]);
    getsubset(nums,ans,finalans,i+1);

    ans.pop_back();
   int idx=i+1;


    while(idx<nums.size() && nums[idx] ==nums[idx-1]) idx++;
      getsubset(nums,ans,finalans,idx);
   

   }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>finalans;
        vector<int>ans;
        getsubset(nums,ans,finalans,0);
        return finalans; 
    }
};