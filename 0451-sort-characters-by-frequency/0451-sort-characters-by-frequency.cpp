class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char t: s){
            mp[t]++;
        }
        priority_queue< pair<int ,char> >pq;
        for(auto m:mp){
            pq.push({m.second,m.first});
        }
        string ans="";
       
        while(pq.size()>0){
            int fre=pq.top().first;
            char ch= pq.top().second;
            pq.pop();
            for(int i=0;i<fre;i++){
                ans+=ch;
            }
        }
        return ans;
        
    }
};