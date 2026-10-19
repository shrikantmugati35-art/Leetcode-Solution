class Solution {
public:
    int mostFrequent(vector<int>& arr, int key) {
    unordered_map<int,int>mp;
      for(int i=0;i<(int)arr.size()-1;i++){
         if (arr[i]==key)
           mp[arr[i + 1]]++;
      }
      int ans=0;
      int maxi=0;
      for(auto x:mp){
        if(x.second >maxi){
            maxi=x.second;
            ans=x.first;

        }
      }
      return ans;
    }
};