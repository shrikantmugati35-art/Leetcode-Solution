class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        int n=v.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int  temp=v[i][j];
                v[i][j]=v[j][i];
                v[j][i]=temp;
            }
        }
        for(int k=0;k<n;k++){
            int i=0,j=n-1;
            while(i<=j){
                int temp=v[k][i];
                v[k][i]=v[k][j];
                v[k][j]=temp;
                i++;
                j--;
            }
        }
        return ;
        
    }
};