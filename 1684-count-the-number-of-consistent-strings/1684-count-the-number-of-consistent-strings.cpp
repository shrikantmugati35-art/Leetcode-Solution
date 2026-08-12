class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int  n=words.size();
        int count=0;
        for(int i=0 ;i<n;i++){
           bool consist=true;
           for(int j=0;j<words[i].size();j++){
            if(allowed.find(words[i][j])==string :: npos){
                 consist=false;
                 break;

            }
           }
           if(consist){
            count++;
           }
        }
        return count;
    }
};