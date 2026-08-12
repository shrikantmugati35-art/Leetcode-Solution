class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         vector<int>ans=nums;
         int  n=nums.size();
            vector<int>v;
         sort(ans.begin(),ans.end());
         for(int i=0;i<n;i++){
            int  pos=lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
            v.push_back(pos);
         }
         return v;
    }
};