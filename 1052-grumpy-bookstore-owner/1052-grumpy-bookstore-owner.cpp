class Solution {
public:
    int maxSatisfied(vector<int>& arr, vector<int>& grumpy, int minutes) {
      int n=grumpy.size();
      int prevloss=0;
      for(int i=0;i<minutes;i++){
        if(grumpy[i]==1) prevloss+=arr[i];
      }
      int maxloss=prevloss;
      int maxidx=0;
      int i=1,j=minutes;
      while(j<n){
        int currloss=prevloss;
        if(grumpy[j]==1) currloss+=arr[j];
        if(grumpy[i-1]==1) currloss-=arr[i-1];
        if(maxloss<currloss){
            maxloss=currloss;
            maxidx=i;
        }
        prevloss=currloss;
        i++;
        j++;
      }
      for(int i=maxidx;i<maxidx+ minutes;i++){
        grumpy[i]=0;
      }
      int sum=0;
      for(int i=0;i<n;i++){
        if(grumpy[i]==0) sum+=arr[i];
      } 
      return sum;
    }
};