class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(int i=0;i<nums.size();i++){
             int d= nums[i];
             while(d>0){
                int c=d%10;
                if(c==digit){
                    count++;
                }
                d=d/10;
             }

        }
        return count;
    }
};