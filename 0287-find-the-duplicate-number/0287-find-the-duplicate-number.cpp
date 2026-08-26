class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int n=nums.size();
       int i=0;
       while(i<n){
        int curr=nums[i];
        if(nums[curr]==nums[i]) return nums[i];
        else swap(nums[i],nums[curr]);
       }
       return -1;
    }
   
};