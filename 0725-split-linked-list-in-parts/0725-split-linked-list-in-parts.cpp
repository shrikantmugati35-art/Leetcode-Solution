
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
         vector<ListNode*>ans;
         int n=0;
         ListNode*temp=head;
         while(temp!=NULL){
            temp=temp->next;
            n++;
         }
        int size=n/k;
        int rem=n%k;
        temp=head;
        while(temp){
            ListNode*C=new ListNode(100);
            ListNode*tempC=C;
            int s=size;
            if(rem>0) s++;
            rem--;
            for(int i=1;i<=s;i++){
                tempC->next =temp;
                temp=temp->next;
                tempC=tempC->next;
            }
            tempC->next=NULL;
            ans.push_back(C->next);
        }
        if(ans.size()<k){
            int exra= k-ans.size();
            for(int i=1;i<=exra;i++){
                ans.push_back(NULL);
            }
        }
        return ans;


    }
};