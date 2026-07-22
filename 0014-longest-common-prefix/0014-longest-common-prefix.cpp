class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n=s.size();
        if(n==0) return s[0];
        sort(s.begin(),s.end());
        string f=s[0];
        string l=s[n-1];
        string m="";
        for(int i=0;i<min(f.size(),l.size());i++){
            if(f[i]==l[i]) {
                m+=f[i];
            }
            else return m;
        }
        return m;
        
    }
};