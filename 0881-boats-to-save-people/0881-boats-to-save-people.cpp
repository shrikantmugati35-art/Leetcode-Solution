class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int bot=0;
        int i=0;
        int j=arr.size()-1;
      while(i<=j){
            if(arr[i]+arr[j]>limit){
                bot++;
                j--;
            }
             else if(arr[i]+arr[j]==limit){
                bot++;
                i++;
                j--;
            }
            else{
                bot++;
                i++;
                j--;
            }
      }
      return bot;
    }
};