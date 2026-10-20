class Solution {
public:
    typedef pair<int,string > pi;
    struct cmp{
        bool operator()( const pi&a, const pi&b){
            if(a.first==b.first){
                return a.second> b.second;
            }
            return a.first<b.first;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pi,vector<pi> ,cmp >pq;
        unordered_map<string,int>mp;
        for(auto  x: words){
            mp[x]++;
        }

        for(auto v: mp){
            pq.push({v.second,v.first});

        }
        vector<string>ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();

        }
     
        return ans;

    }
};