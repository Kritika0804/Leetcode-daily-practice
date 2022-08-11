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
    int length(ListNode* head){
        int cnt=0;
        while(head!=NULL){
            cnt++;
            head=head->next;
        }
        return cnt;
    }
    
    
    ListNode* middleNode(ListNode* head) {
        int n=length(head);
        int r=n/2;
        int i=0;
        while(head!=NULL && r>=i){
            if(r==i){
                return head;
            }
            head=head->next;
            i++;
        }
        return NULL;
    }
};