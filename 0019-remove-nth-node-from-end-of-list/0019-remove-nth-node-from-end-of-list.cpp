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

 int count(ListNode* temp)
 {
     int cnt=0;
     while(temp!=NULL)
     {
         temp=temp->next;
         cnt++;
     }
     return cnt;
 }
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
//           ListNode* p1=head;
//             ListNode* p2=head;
//         if(p1->next==NULL){
//             return NULL;
//         }
//         while(n!=0){
//             p1=p1->next;
//             n--;
//         }
//         while(p1->next!=NULL){
//             p1=p1->next;
//             p2=p2->next;
//         }
//          p2->next=p2->next->next;
        
        
//         return head;
        ListNode *fast = head, *slow = head;
        for (int i = 0; i < n; i++) fast = fast->next;
        if (!fast) return head->next;
        while (fast->next) fast = fast->next, slow = slow->next;
        slow->next = slow->next->next;
        return head;
        
            
    }
};