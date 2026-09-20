class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
         int  productsum=0;
        for(int i=0;i<n;i++){
           int val=26-(s[i]-'a');
           int positon=i+1;
           int pro=val*positon;
           productsum+=pro;
            
        }
        return  productsum;
        
    }
};