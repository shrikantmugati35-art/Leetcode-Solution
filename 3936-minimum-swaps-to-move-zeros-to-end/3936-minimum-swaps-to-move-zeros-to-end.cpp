class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n=nums.size();
        int count=0;
         int i=0,j=n-1;
         while(i<j){
            if(nums[i]!=0 ) i++;
            else {
                swap(nums[i] ,nums[j]);
                count++;
                i++;
                j--;
            }
         }
         return count;
    }
};