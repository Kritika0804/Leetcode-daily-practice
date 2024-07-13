/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode p = null;
        ListNode q = head;
        if(head==null){
            return null;
        }
        if(head.next == null){
            return head;
        }
        ListNode r = head.next;
        
        while(r!=null){
            q.next = p;
            p=q;
            q=r;
            r = r.next;
        }
        q.next=p;
        
        return q;
        
    }
}