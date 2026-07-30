class Solution {
public:
    int dfs( vector<int>&fre){
        int count =0;
        for(int i=0;i<26;i++){
            if(fre[i]==0) continue;
            fre[i]--;
            count++;
            count+=dfs(fre);
            fre[i]++;
        }
      
        return count;
    }
   
    int numTilePossibilities(string tiles) {
        vector<int>fre(26,0);
        for(char ch:tiles)
            fre[ch-'A']++;
             return dfs(fre);
        
       
    }   
};