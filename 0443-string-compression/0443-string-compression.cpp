class Solution {
public:
    int compress(vector<char>& chi) {
        int n=chi.size();
        int idx=0;
        for(int i=0;i<n;i++){
            char ch=chi[i];
            int count=0;
            while(i<n && chi[i]==ch){
                count++; i++;
            }
            if(count==1 ) chi[idx++]=ch;
            else{
                chi[idx++]=ch;
                string str=to_string(count);
                for( char dig: str){
                    chi[idx++]=dig;
                }
            }
            i--;
        }
        chi.resize(idx);
        return idx;
        
    }
};