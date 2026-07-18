class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int minr=0,minc=0;
        int maxr=n-1,maxc=m-1;
        int cout=0;
        int total=n*m;
        vector<int>v;
        while(minr<=maxr && minc<=maxc){
            for(int j=minc;j<=maxc && cout<total ;j++){
                v.push_back(matrix[minr][j]);
                cout++;

            }
              minr++;
            for(int i=minr;i<=maxr && cout<total;i++){
                v.push_back(matrix[i][maxc]);
                cout++;
            }
            maxc--;
            for(int j=maxc; j>=minc && cout<total;j--){
                v.push_back(matrix[maxr][j]);
                cout++;
            }
            maxr--;
            for(int i =maxr ;i>=minr && cout<total;i--){
                v.push_back(matrix[i][minc]);
                cout++;
            }
            minc++;
        }
        return v;
        
    }
};