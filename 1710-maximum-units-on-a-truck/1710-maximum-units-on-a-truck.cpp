bool cmp(vector<int>&a,vector<int>&b){
    return a[1]>b[1];
}

class Solution {
public:
    int maximumUnits(vector<vector<int>>& bt, int ts) {
        sort(bt.begin(),bt.end(),cmp);
        int profit=0;
        for(int i=0;i<bt.size();i++){
            if(bt[i][0]<=ts){
                profit+=bt[i][0]*bt[i][1];
                ts-=bt[i][0];
            }
            else{
                profit += ts*bt[i][1];
                ts=0;
            }
            if(ts==0) break;
        }
        return profit;
    }
};