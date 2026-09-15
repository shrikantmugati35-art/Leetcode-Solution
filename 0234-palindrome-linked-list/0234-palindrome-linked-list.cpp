
class Solution {
public:
     ListNode*reverselist(ListNode*head){
        ListNode*prev=NULL,*curr=head,*Next=head;
        while(curr!=NULL){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
     }
       
    bool isPalindrome(ListNode* head) {
       ListNode*slow=head;
       ListNode*fast=head;
       while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
       } 
       ListNode*newhead=reverselist(slow->next);
       ListNode*a=head;
       ListNode*b=newhead;
       while(b){
        if(a->val!=b->val) return false;
        a=a->next;
        b=b->next;
       }
       return  true;
    }
};