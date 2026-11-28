class Solution {
public:

 
    int longestPalindromeSubseq(string s) {


       int m=s.size();
      vector<vector<int>>dp(m,vector<int>(m,0));

      for(int i=m-1;i>=0;i--){
        dp[i][i]=1;
        for(int j=i+1;j<m;j++){
            if(s[i]==s[j]){
                 dp[i][j] = 2 + dp[i + 1][j - 1];
            }
            else{
                 dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
      }
      return dp[0][m-1];
       
      
    }
};