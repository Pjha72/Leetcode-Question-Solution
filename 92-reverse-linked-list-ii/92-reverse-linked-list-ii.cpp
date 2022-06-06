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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode dummy(0);
            dummy.next=head;
        ListNode *pre=&dummy, *curr=head, *curr1=head,*temp;
        // Two pointer Approach
        if(head==NULL || (left==right)){
            return head;
        }
        for(int i=1;i<left;i++){
            pre=pre->next;
            curr=curr->next;
        }
        for(int i=1;i<=right-left;i++){
            temp=curr->next;
            curr->next=temp->next;
            temp->next=pre->next;
            pre->next=temp;
        }
        return dummy.next;
    }
};