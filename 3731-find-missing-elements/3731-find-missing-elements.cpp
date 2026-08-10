class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int min=INT_MAX;
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]<min) min=nums[i];
            if(nums[i]>mx) mx=nums[i];
        }
        for(int i=min;i<mx;i++){
            bool flag=false;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    flag=true;
                    break;
                }
            }
            if(!flag){
                ans.push_back(i);
            }

        }
        return ans;
    }
};