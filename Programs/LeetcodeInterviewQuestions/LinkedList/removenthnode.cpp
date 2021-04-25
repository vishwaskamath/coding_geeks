// Given the head of a linked list, remove the nth node from the end of the list and return its head.

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        ListNode* fastptr;
        ListNode* slowptr;
        dummy->next = head;
        fastptr = dummy;
        slowptr = dummy;
        for(int i=1;i<=n+1;i++)
        {
            fastptr = fastptr->next;
        }
        while(fastptr!=NULL)
        {
            fastptr = fastptr->next;
            slowptr = slowptr->next;
        }
        slowptr->next = slowptr->next->next;
        return dummy->next;
    }
};
