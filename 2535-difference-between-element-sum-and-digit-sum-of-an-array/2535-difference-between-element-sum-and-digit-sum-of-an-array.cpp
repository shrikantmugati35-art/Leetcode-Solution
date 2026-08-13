class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1=0;
       int sum2=0;
        for(int i=0;i<nums.size();i++){
            sum1+=nums[i];
            int n=nums[i];
             while(n>0){
            int c=n % 10;
            sum2+=c;
            n=n/10;
        }
        }
       
        return abs(sum1-sum2);
    }
};