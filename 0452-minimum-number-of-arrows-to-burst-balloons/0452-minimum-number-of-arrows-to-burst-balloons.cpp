class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](vector<int> &i1 ,vector<int> &i2){
            return i1[1]<i2[1];
        });
        int ans=0;
        int last=points[0][1];
        for(int i=1;i<points.size();i++){
            if(points[i][0]<=last){
                ans++;
            }else{
                last=points[i][1];
            }
        }
        return points.size()-ans;
    }
};