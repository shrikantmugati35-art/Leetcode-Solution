class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
         for(int i=0;i<n;i++){
             int  mxheight=i;
            for(int j=i+1;j<n;j++){
                if(heights[j]>heights[mxheight]){
                        mxheight=j;
                }
            }
        swap(heights[i],heights[ mxheight]);
         swap(names[i],names[ mxheight]);

         }
       
       
        
        return names;
    }
};