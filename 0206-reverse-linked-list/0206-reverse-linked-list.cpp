
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode*curr=head;
    ListNode*prev=NULL;
    ListNode*Next=head;
    while(curr){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    return prev;
    } 
};