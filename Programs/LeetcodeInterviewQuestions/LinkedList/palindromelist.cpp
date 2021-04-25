// Given the head of a singly linked list, return true if it is a palindrome.

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string str = "";
        ListNode* cur;
        cur=head;
        while(cur!=NULL)
        {
            int n = str.length();
            str += cur->val;
            cur=cur->next;
        }
        
        return ispalindrome(str);
    }
    bool ispalindrome(string str)
    {
        int n = str.length();
        for(int i=0;i<n/2;i++)
        {
            if(str[i]!=str[n-i-1])
            {
                return false;
            }
        }
        return true;
        
    }
};
