class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int el:arr){
            el=((el%k)+k)%k;
            mp[el]++;
        }
        if(mp.find(0)!=mp.end()){
            if(mp[0]%2!=0) return false;
            mp.erase(0);
        }
        for(auto x:mp){
            int el=x.first;
            int rem=k-el;
            if(mp.find(rem)==mp.end()) return false;
            if(mp[el]!=mp[rem]) return false;
        }
        return true;
    }
};