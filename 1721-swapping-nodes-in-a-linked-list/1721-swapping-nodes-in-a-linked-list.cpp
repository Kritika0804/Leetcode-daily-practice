/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

    class Solution {
public:
    int getLength(ListNode *head)
    {
        int len = 0;
        ListNode *p = head;
        while(p!=NULL)
        {
            len++;
            p = p->next;
        }
        return len;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int n = getLength(head);
        int a[n];
        ListNode *p = head;
        int s = 0;
        while(p!=NULL)
        {
            a[s] = p->val;
            s++;
            p = p->next;
        }
        int i = 0+k-1;
        int j = n-k;
        s = a[i];
        a[i] = a[j];
        a[j] = s;
        i = 0;
        p = head;
        while(p!=NULL)
        {
            p->val = a[i];
            i++;
           
            p = p->next;
        }
        return head;
        
    }

};