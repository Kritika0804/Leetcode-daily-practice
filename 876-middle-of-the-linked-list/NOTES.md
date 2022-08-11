This questions can be done using two approaches:
* Brute Force Approach:
1. Find length of the linked list
2. then traverse the list till we get (length/2)th node
3. return node
* Optimized Solution(TWO POINTER APPROACH):
1. declare two pointers slow fast and initialize it as value of head.
2. traverse the list as (slow=slow->next) and (fast=fast->next->next)
3. return slow
`ListNode *slow, *fast;
slow = fast = head;
// Breaking Conditions
// 0. In odd Case fast->next will be nullptr.
// 1. In Even Case fast will be nullptr.
while(fast && fast->next){
slow = slow->next;
fast = fast->next->next;
}
return slow;`