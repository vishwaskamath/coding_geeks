// Given the head of a singly linked list, reverse the list, and return the reversed list

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev;
        ListNode* cur;
        ListNode* next;
        prev = NULL;
        cur = head;
        while(cur!=NULL)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
};
