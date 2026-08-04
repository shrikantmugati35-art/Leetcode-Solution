class Solution {
public:
    int firstpostion(vector<int>&nums,int target ){
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]<target){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
         return lo;
        
    }
    int lastpositon(vector<int>&nums,int target ){
    int n=nums.size();
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]<=target){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return hi;
    }
    vector<int> searchRange(vector<int>& nums, int target) {

        
        int first= firstpostion(nums,target );
         int last=lastpositon(nums,target);
         if(first==nums.size() || nums[first]!=target) return {-1,-1};
        return {first,last};

    }
};