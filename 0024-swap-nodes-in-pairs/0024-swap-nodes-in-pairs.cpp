
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL  || head->next==NULL) return head;
        ListNode*dumy=new ListNode(109);
        dumy->next=head;
        ListNode*prev=dumy;
        while(prev->next!=NULL && prev->next->next!=NULL){
        ListNode*fast=prev->next;
        ListNode*second=fast->next;
        fast->next=second->next;
        second->next=fast;
        prev->next=second;
        prev=fast; 
        }
        return dumy->next;
 
        
    }
};