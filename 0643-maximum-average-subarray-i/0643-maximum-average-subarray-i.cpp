class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int  pre=0;
        for(int i=0;i<k;i++){
            pre+=nums[i];
        }
        int maxsum=pre;
        for(int i=k;i<n;i++){
            pre=pre-nums[i-k]+nums[i];
            maxsum=max(pre,maxsum);
        }
        return (double)maxsum/k;
        
    }
};