// Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* result = NULL;
        if(l1 == NULL)
        {
            return l2;
        }
        if(l2 == NULL)
        {
            return l1;
        }
        if(l1->val <= l2->val)
        {
            result = l1;
            result->next = mergeTwoLists(l1->next,l2);
        }
        else
        {
            result = l2;
            result->next = mergeTwoLists(l2->next,l1);
        }
            
    return result;
    }
};
