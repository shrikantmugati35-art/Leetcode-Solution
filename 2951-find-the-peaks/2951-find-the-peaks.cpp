class Solution {
public:
    vector<int> findPeaks(vector<int>& num) {
        int n=num.size();
        vector<int>ans;
        for(int i=1;i<n-1;i++){
            if(num[i]> num[i-1] && num[i]>num[i+1]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};