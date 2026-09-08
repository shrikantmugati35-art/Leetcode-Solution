class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int n=nums.size();
       int i=0,j=0 ,zeropro=-1,  maxlen=0,count=0;
       while(j<n){
        int prev=zeropro;
        if(nums[j]==0){
            count++;
            zeropro=j;
        }
        if(count<=1)j++;
        else{
            maxlen=max(maxlen,j-i);
            i=prev+1;
            count--;
            j++;
        }

       }
        maxlen=max(maxlen,j-i);
        return maxlen-1;
    }
};