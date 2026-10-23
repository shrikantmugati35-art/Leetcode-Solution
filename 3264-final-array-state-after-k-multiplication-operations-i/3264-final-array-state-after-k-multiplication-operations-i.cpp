class Solution {
public:

    typedef pair<int ,int> pi;
    vector<int> getFinalState(vector<int>& arr, int k, int mult) {
         priority_queue<pi , vector<pi>,greater<pi> >pq;
         for(int i=0;i<arr.size();i++){
            pq.push({arr[i],i});
         }
         while(k--){
            auto[val,idx]=pq.top();
            pq.pop();
            arr[idx]=val*mult;
            pq.push({arr[idx],idx});
         }
         return arr;




    }
};