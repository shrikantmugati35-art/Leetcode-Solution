class Solution {
public:
    int numRabbits(vector<int>& answer) {
        unordered_map<int,int>mp;
        int result=0;
        for(int x:answer){
            if(mp[x]==0) result+=x+1;
                mp[x]++;
        if(mp[x]==x+1) mp[x]=0;
        }
        return result;
    }
};