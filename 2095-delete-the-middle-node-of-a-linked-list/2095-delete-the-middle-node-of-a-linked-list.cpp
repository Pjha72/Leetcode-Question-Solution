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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        if(head->next == NULL){
            return NULL;
        }
        ListNode* curr = head;
        ListNode* pre = head;
        ListNode* tail = head;
        
        while(curr && curr->next){
            tail  = pre;
            pre = pre->next;
            curr = curr->next->next;
        }
        tail->next = pre->next;
        return head;
    }
};