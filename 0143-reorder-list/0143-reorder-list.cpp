
class Solution {
public:
    ListNode*reverstlist(ListNode*head){
        if(head==NULL  ||head->next==NULL) return head;
        ListNode*newhead=reverstlist(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
    }
    void reorderList(ListNode* head) {
      ListNode*slow=head;
     ListNode*fast=head; 
     while(fast->next!=NULL && fast->next->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;
     } 
    ListNode*b=reverstlist(slow->next);
        ListNode*a=head;
        slow->next=NULL;
        ListNode*c=new ListNode(100);
        ListNode*tempA=a;
        ListNode*tempC=c;
        ListNode*tempB=b;
        while(tempA!=NULL && tempB!=NULL){
            tempC->next=tempA;
            tempA=tempA->next;
            tempC=tempC->next;

            tempC->next=tempB;
            tempB=tempB->next;
            tempC=tempC->next;
        }
        tempC->next=tempA;
        head=c->next;
    }
};