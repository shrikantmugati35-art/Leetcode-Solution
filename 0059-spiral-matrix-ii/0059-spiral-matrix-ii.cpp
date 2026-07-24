class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int nums=1;
        int minr=0,minc=0;
        int maxr=n-1,maxc=n-1;
        vector<vector<int>> ans(n,vector<int>(n));
        while(minr<=maxr && minc<=maxc){
            for(int j=minc;j<=maxc  ;j++){
                ans[minr][j]=nums++;
               

            }
              minr++;
            for(int i=minr;i<=maxr ;i++){
            ans[i][maxc]=nums++;
                
            }
            maxc--;
            for(int j=maxc; j>=minc ;j--){
             ans[maxr][j]=nums++;
                
            }
            maxr--;
            for(int i =maxr ;i>=minr ;i--){
                ans[i][minc]=nums++;
          
            }
            minc++;
        }
        return ans;
        
    }
};