class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int  num:nums){
            sum+=num;
        }
        int target=sum/2;

        if(sum%2!=0){
            return false;
        }
        vector<int>dp(target+1,false);
         dp[0]=true;

        for(int num:nums){
            for(int j=target;j>=num;j--){
                dp[j]=dp[j]||dp[j-num];
            }
        }
        return dp[target];
    }
};