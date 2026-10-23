class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int>pq;
        for(int x:nums){
            if(x>0)
            pq.push(x);
        }
   int count=0;
       while(!pq.empty()){
        int min=pq.top();
        pq.pop();
       while(!pq.empty() &&pq.top()==min){
        pq.pop();
       }
         count ++;
    }
         return count;
        
    }
};