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
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        if(h1==NULL){
            return h2;
        }
        if(h2== NULL){
            return h1;
        }
        
        ListNode* fhead=NULL;
        ListNode* ftail=NULL;
        if(h1->val<h2->val){
                fhead=h1;
                ftail=h1;
                h1=h1->next;
        } 
        else{
            fhead=h2;
            ftail=h2;
            h2=h2->next;
        }

        
        while(h1!=NULL && h2!=NULL){
            if(h1->val<h2->val){
                ftail->next=h1;
                ftail=ftail->next;
                h1=h1->next;
            }
            else{
                ftail->next=h2;
                ftail=ftail->next;
                h2=h2->next;
            }
        }
        if(h1!=NULL){
            ftail->next=h1;
            
        }
        if(h2!=NULL){
            ftail->next=h2;
            
        }
        return fhead;
    }
};