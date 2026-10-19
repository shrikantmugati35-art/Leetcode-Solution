class Solution {
public:
     typedef pair<int,int>pi;
    vector<int> frequencySort(vector<int>& arr) {
      unordered_map<int,int>mp;
      for(int el : arr){
        mp[el]++;
      }
      priority_queue<pi ,vector<pi> ,greater<pi> >pq;
        for(auto x: mp){
            pq.push({x.second,-x.first});
        }
    vector<int> ans;
    while(pq.size()>0){
            int fre=pq.top().first;
            int  c= -pq.top().second;
            pq.pop();
            for(int i=0;i<fre;i++){
                ans.push_back(c);
            }
        }
    return ans;
        

    }
};