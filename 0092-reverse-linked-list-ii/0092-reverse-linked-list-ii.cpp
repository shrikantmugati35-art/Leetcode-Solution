
class Solution {
public:
    ListNode*revereslist(ListNode*head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* c=revereslist(head->next);
        head->next->next=head;
        head->next=NULL;
      return c;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
     int n=1;
      ListNode* a=NULL;
    ListNode* b=NULL;
     ListNode* c=NULL;
    ListNode* d=NULL;
      ListNode* temp=head;
      while(temp){
        if(n==left-1) a=temp;
        if(n==left) b=temp;
        if(n==right) c=temp;
        if(n==right+1) d=temp;
        temp=temp->next;
        n++;
      }
       if(a)a->next=NULL;
       c->next=NULL;
      c=revereslist(b);
      if(a) a->next=c;
      b->next=d;
      if(a) return head;
      return c;

    }
};