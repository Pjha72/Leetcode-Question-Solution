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
    ListNode* reverseList(ListNode* head) {
        // ListNode *pre=NULL, *curr=head, *temp;
        //Two pointer Approach
        // while(curr!=NULL){
        //     temp=curr->next;
        //     curr->next=pre;
        //     pre=curr;
        //     curr=temp;
        // }
                // return pre;

        
//         Recursive Approach
        return func(head,NULL);
    }
    ListNode* func(ListNode* curr,ListNode* pre){
        if(curr==NULL){
            return pre;
        }
        ListNode* newnode=curr->next;
        curr->next=pre;
        return func(newnode,curr);
    }
    
};